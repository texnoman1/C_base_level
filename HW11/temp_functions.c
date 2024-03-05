#include "temp_functions.h"

void print_month_stats(int month) {
    char filename[] = "temperature_small.csv"; // Имя файла
    int year, m, day, hour, minute, temp;
    int total_temp = 0, count = 0;

    // Открытие файла для чтения
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open file %s\n", filename);
        return;
    }

    // Считывание и анализ каждой строки файла
    char line[100]; // Максимальная длина строки
    while (fgets(line, sizeof(line), file)) {
        // Извлечение данных из строки
        if (sscanf(line, "%d;%d;%d;%d;%d;%d", &year, &m, &day, &hour, &minute, &temp) != 6) {
            printf("Error: Invalid data format in line: %s\n", line);
            continue;
        }

        // Проверка соответствия месяца
        if (m == month) {
            total_temp += temp;
            count++;
        }
    }

    // Закрытие файла
    fclose(file);

    // Вывод средней температуры, если были данные для указанного месяца
    if (count > 0) {
        printf("Average temperature for month %d: %.1f C\n", month, (float)total_temp / count);
    } else {
        printf("No data found for month %d\n", month);
    }
}

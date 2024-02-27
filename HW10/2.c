/*
 Задача 2. Удалить пробелы из текста
В файле .txt необходимо удалить все лишние пробелы (в начале предложения
и сдвоенные пробелы). Для решения задачи разработать функцию. Результат
записать в .txt.
Данные на входе: Строка из английских букв, знаков препинания и
пробелов. Не более 1000 символов.
Данные на выходе: Строка из английских букв, знаков препинания и
пробелов.
Пример
Данные на входе: Hello world!
Данные на выходе: Hello world! 
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 1000

// Функция для записи строки в файл
void writeToFile(char *str, const char *filename) {
    FILE *file = fopen(filename, "w");
    fprintf(file, "%s", str);
    fclose(file);
}

// Функция для удаления лишних пробелов из строки
void removeExtraSpaces(char *str) {
    int len = strlen(str);
    int currentIndex = 0; // Индекс текущего символа
    bool prevIsSpace = false; // Флаг, указывающий, был ли предыдущий символ пробелом

    // Удаляем пробелы в начале строки
    int startIdx = 0;
    while (str[startIdx] == ' ') {
        startIdx++;
    }

    // Копируем оставшуюся часть строки с удалением лишних пробелов
    for (int i = startIdx; i < len; i++) {
        // Если текущий символ - не пробел или предыдущий символ тоже не пробел, копируем его в строку
        if (str[i] != ' ' || !prevIsSpace) {
            str[currentIndex++] = str[i];
            prevIsSpace = (str[i] == ' '); // Устанавливаем флаг, если текущий символ - пробел
        }
    }

    // Завершаем строку нулевым символом
    str[currentIndex] = '\0';
}

int main() {
    char str[MAX_LENGTH];

    // Читаем строку из файла
    FILE *file = fopen("input.txt", "r");
    fscanf(file, "%[^\n]", str);
    fclose(file);

    // Удаляем пробелы в начале строки
    removeExtraSpaces(str);

    // Удаляем лишние пробелы
    removeExtraSpaces(str);

    // Записываем результат обратно в файл
    writeToFile(str, "output.txt");

    return 0;
}

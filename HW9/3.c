/*
 Задача 3. Числа в массив
В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые
числа и иные символы. Требуется все числа, которые встречаются в строке,
поместить в отдельный целочисленный массив. Например, если дана строка
"data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести
массив по возрастанию в файл .txt.
Данные на входе: Строка из английских букв, цифр и знаков
препинания
Данные на выходе: Последовательность целых чисел
отсортированная по возрастанию
Пример
Данные на входе: data 48 call 9 read13 blank0a
Данные на выходе: 0 9 13 48
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000 // Максимальная длина строки

// Функция для записи строки в файл
void writeStringToFile(const char *string, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Ошибка при открытии файла для записи.\n");
        exit(1); // Выход из программы с кодом ошибки
    }
    fprintf(file, "%s", string);
    fclose(file);
}

// Функция для чтения строки из файла
void readStringFromFile(char *string, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Ошибка при открытии файла для чтения.\n");
        exit(1); // Выход из программы с кодом ошибки
    }
    fgets(string, MAX_SIZE, file);
    fclose(file);
}

// Функция для проверки, является ли символ цифрой
int isDigit(char c) {
    return (c >= '0' && c <= '9');
}

// Функция сравнения для использования в qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    char string[MAX_SIZE];
    int numbers[MAX_SIZE / 2]; // Массив для хранения чисел
    int count = 0; // Счетчик чисел
    
    // Считываем строку из файла
    readStringFromFile(string, "input3.txt");
    
    // Проходим по каждому символу строки
    for (int i = 0; i < strlen(string); i++) {
        // Если текущий символ - цифра, начинаем парсить число
        if (isDigit(string[i])) {
            int num = 0;
            // Считываем число, пока символ - цифра
            while (isDigit(string[i])) {
                num = num * 10 + (string[i] - '0');
                i++;
            }
            // Добавляем число в массив
            numbers[count++] = num;
        }
    }
    
    // Сортируем массив чисел по возрастанию
    qsort(numbers, count, sizeof(int), compare);
    
    // Записываем отсортированный массив чисел в файл
    FILE *outputFile = fopen("output3.txt", "w");
    if (outputFile == NULL) {
        printf("Ошибка при открытии файла для записи.\n");
        exit(1); // Выход из программы с кодом ошибки
    }
    for (int i = 0; i < count; i++) {
        fprintf(outputFile, "%d ", numbers[i]);
    }
    fclose(outputFile);
    
    return 0;
}

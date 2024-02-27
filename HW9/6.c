/*
 Задача 6. Заканчивается на a
В файле .txt дано предложение. Необходимо определить, сколько слов
заканчиваются на букву 'а'. Ответ записать в файл .txt.
Данные на входе: Строка из английских букв и пробелов не более 1000
символов.
Данные на выходе: Одно целое число
Пример
Данные на входе: Mama mila ramu
Данные на выходе: 2
 */
#include <ctype.h> // Для использования функции tolower()
#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 100

// Функция для записи тестовой строки в файл
void output0(char *str, char filename []) {
    FILE *out;
    out = fopen(filename, "w");
    fprintf(out, "%s", str);
    fclose(out);
}

// Функция для считывания строки из файла
void input(char *string) {
    FILE *in;
    in = fopen("input6.txt", "r");
    // Считываем строку до конца файла
    while (fscanf(in, "%[^\n]", string) == 1);
    fclose(in);
}

// Функция для записи количества слов, заканчивающихся на 'a', в файл
void output(char *str, char filename []) {
    FILE *out;
    int count = 0;
    out = fopen(filename, "w");
    // Разбиваем строку на слова и проверяем каждое слово
    char *str1 = strtok(str, " ");
    
    while (str1 != NULL) {
        // Проверяем, заканчивается ли слово на букву 'a'
        if (tolower(str1[strlen(str1) - 1]) == 'a') {
            count++;
        }
        str1 = strtok(NULL, " ");
    }

    // Записываем количество слов, заканчивающихся на 'a', в файл
    fprintf(out, "%d", count);
    fclose(out);
}

int main(int argc, char **argv) {
    char stringFile[MAXELEMENTS];
    
    // Записываем тестовую строку в файл, для удобства
    output0("Mama mila ramu",  "input6.txt");
    
    // Считываем строку из файла
    input(stringFile);
    
    // Записываем количество слов, заканчивающихся на 'a', в файл
    output(stringFile,  "output6.txt");
    
    return 0;
}

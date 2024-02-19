/*
Задача 5. Самое длинное слово
В файле .txt дана строка слов, разделенных пробелами. Найти самое длинное
слово и вывести его в файл .txt. Случай, когда самых длинных слов может быть
несколько, не обрабатывать.
Данные на входе: Строка из английских букв и пробелов. Не более
1000 символов.
Данные на выходе: Одно слово из английских букв.
Пример
Данные на входе: Hello beautiful world
Данные на выходе: beautiful 
 */

#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 100
//Функция для записи тестовой строки в файл
void output0(char *str, char filename []) {
    FILE *out;
    out = fopen(filename, "w");
    fprintf(out, "%s", str);
    fclose(out);
}
// Функция для считывания строки из файла
void input(char *string) {
    FILE *in;
    in = fopen("input5.txt", "r");
    // Считываем строку до конца файла
    while (fscanf(in, "%[^\n]", string) == 1);
    fclose(in);
}

// Функция для записи номеров символов, с , в файл
void output(char *str, char filename []) {
    FILE *out;
    int max = 0;
    char longestWord[MAXELEMENTS]; // Для хранения самого длинного слова
    out = fopen(filename, "w");
    char *token = strtok(str, " "); // Разбиваем строку на слова
    while (token != NULL) {
        int len = strlen(token);
        if (len > max) {
            max = len;
            strcpy(longestWord, token); // Сохраняем самое длинное слово
        }
        token = strtok(NULL, " "); // Получаем следующее слово
    }
    fprintf(out, "%s", longestWord); // Записываем самое длинное слово в файл
    fclose(out);
}

int main(int argc, char **argv) {
    char stringFile[MAXELEMENTS];
    // Записываем тестовую строку в файл, для удобства
    output0("Hello beautiful world",  "input5.txt");
    // Считываем строку из файла
    input(stringFile);
    // Записываем измененную строку в файл
    output(stringFile,  "output5.txt");
    return 0;
}

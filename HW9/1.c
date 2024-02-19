/* 
Задача 1. По одному разу
В файле .txt даны два слова не более 100 символов каждое, разделенные
одним пробелом. Найдите только те символы слов, которые встречаются в
обоих словах только один раз. Напечатайте их через пробел в файл .txt в
лексикографическом порядке.
Данные на входе: Два слова из маленьких английских букв через
пробел. Длинна каждого слова не больше 100 символов.
Данные на выходе: Маленькие английские буквы через пробел.
Пример №1
Данные на входе: hello world
Данные на выходе: o
Данные на входе: aabcd bcef
Данные на выходе: b c
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

// Функция для записи строки в файл
void output0(char *str, char *str1, char filename[]) {
    FILE *out;
    out = fopen(filename, "w");
    fprintf(out, "%s", str);
    fprintf(out, "%s", str1);
    fclose(out);
}

// Функция для чтения строки из файла
void input(char *word1, char *word2) {
    FILE *in;
    in = fopen("input1.txt", "r");
    // Считываем два слова из файла
    fscanf(in, "%s %s", word1, word2);
    fclose(in);
}

// Функция для записи символов, встречающихся в обоих словах только один раз, в файл
void output(char *word1, char *word2, char filename[]) {
    FILE *out;
    out = fopen(filename, "w");

    bool isUnique[26] = {false}; // Массив для отметки, встречалась ли буква в обоих словах
    int len1 = strlen(word1); // Длина первого слова
    int len2 = strlen(word2); // Длина второго слова
    
    // Перебор символов первого слова
    for (int i = 0; i < len1; i++) {
        char currentChar = tolower(word1[i]); // Привести символ к нижнему регистру
        int index = currentChar - 'a'; // Индекс символа в массиве
        // Если символ встречается в первый раз в первом слове и не встречается во втором слове
        if (!isUnique[index] && strchr(word2, currentChar) == NULL) {
            isUnique[index] = true; // Отметить символ как встречающийся в первом слове
        }
    }

    // Перебор символов второго слова
    for (int i = 0; i < len2; i++) {
        char currentChar = tolower(word2[i]); // Привести символ к нижнему регистру
        int index = currentChar - 'a'; // Индекс символа в массиве
        // Если символ встречается в первый раз во втором слове и не встречается в первом слове
        if (!isUnique[index] && strchr(word1, currentChar) == NULL) {
            isUnique[index] = true; // Отметить символ как встречающийся во втором слове
        }
    }
    
    // Запись символов, встречающихся в обоих словах только один раз, в файл
    for (int i = 0; i < 26; i++) {
        if (isUnique[i]) {
            fprintf(out, "%c ", 'a' + i); // Записать символ в файл
        }
    }
    
    fclose(out); // Закрытие файла
}

int main(int argc, char **argv) {
    char word1[MAX_WORD_LENGTH], word2[MAX_WORD_LENGTH]; // Объявление массивов для хранения слов
    output0("hello ", "world", "input1.txt");
    input(word1, word2); // Вызов функции для чтения слов из файла
    output(word1, word2, "output1.txt"); // Вызов функции для записи символов в файл
    return 0; // Возврат нуля, чтобы показать успешное выполнение программы
}

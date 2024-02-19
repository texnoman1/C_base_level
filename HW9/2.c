/*
 Задача 2. Заменить a на b
В файле .txt дана символьная строка не более 1000 символов. Необходимо
заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и
строчные. Результат записать в .txt.
Данные на входе: Строка из маленьких и больших английских букв,
знаков препинания и пробелов.
Данные на выходе: Строка из маленьких и больших английских
букв, знаков препинания и пробелов.
Пример
Данные на входе: aabbccddABCD
Данные на выходе: bbaaccddBACD
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
    in = fopen("input2.txt", "r");
    // Считываем строку до конца файла
    while (fscanf(in, "%[^\n]", string) == 1);
    fclose(in);
}

// Функция для записи номеров символов, с заменой а на b, в файл
void output(char *str, char filename []) {
    FILE *out;
    out = fopen(filename, "w");
    int len = strlen(str); // Длина строки 
    // Проходим по всем символам строки
    for (int i = 0; i < len; i++) {
        // Если символ совпадает с а  меняем его на b, записываем  в файл
        if (str[i] == 'a')
            fprintf(out, "%c", 'b');
        else if (str[i] == 'b')
            fprintf(out, "%c", 'a');  
        else if (str[i] == 'A')
            fprintf(out, "%c", 'B');
        else if (str[i] == 'B')
            fprintf(out, "%c", 'A');
        else 
            fprintf(out, "%c", str[i]);            
    }
    fclose(out);
}

int main(int argc, char **argv) {
    char stringFile[MAXELEMENTS];
    // Записываем тестовую строку в файл, для удобства
    output0("aabbccddABCD",  "input2.txt");
    // Считываем строку из файла
    input(stringFile);
    // Записываем измененную строку в файл
    output(stringFile,  "output2.txt");
    return 0;
}

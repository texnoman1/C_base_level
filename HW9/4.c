/*
 Задача 4. Удалить повторяющиеся символы
В файле .txt строка из маленьких и больших английских букв, знаков
препинания и пробелов. Требуется удалить из нее повторяющиеся символы и
все пробелы. Результат записать в файл .txt.
Данные на входе: Строка из маленьких и больших английских букв,
знаков препинания и пробелов. Размер строки не более 1000 символов.
Данные на выходе: Строка из маленьких и больших английских
букв.
Пример
Данные на входе: abc cde def
Данные на выходе: abcdef
 */

#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 100

// Функция для записи тестовой строки в файл
void output0(char *str, char filename[]) {
    FILE *out;
    out = fopen(filename, "w");
    fprintf(out, "%s", str);
    fclose(out);
}

// Функция для считывания строки из файла
void input(char *string) {
    FILE *in;
    in = fopen("input4.txt", "r");
    // Считываем строку до конца файла
    while (fscanf(in, "%[^\n]", string) == 1);
    fclose(in);
}

// Функция для записи символов, не повторяющихся в строке, в файл
void output(char *str, char filename[]) {
    FILE *out;
    out = fopen(filename, "w");
    int len = strlen(str); // Длина строки
    
    // Проходим по всем символам строки
    for (int i = 0; i < len; i++) {
        int count = 0; // Счетчик повторений символа
        
        // Если текущий символ - пробел, пропускаем его
        if (str[i] == ' ')
            continue;
        
        // Проверяем, сколько раз текущий символ уже встречался ранее
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j])
                count++;
        }
        
        // Если текущий символ встречается впервые, записываем его в файл
        if (count < 1)
            fprintf(out, "%c", str[i]);  
    }
    fclose(out);
}

int main(int argc, char **argv) {
    char stringFile[MAXELEMENTS];
    
    // Записываем тестовую строку в файл
    output0("abc cde def",  "input4.txt");
    
    // Считываем строку из файла
    input(stringFile);
    
    // Записываем измененную строку в файл
    output(stringFile,  "output4.txt");
    
    return 0;
}

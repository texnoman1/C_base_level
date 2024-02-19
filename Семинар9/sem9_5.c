/*
Демонстрация. Cao заменить на Ling
В файле .txt дано предложение. Необходимо заменить все имена «Cao» на «Ling» и
записать результат в файл .txt.
Данные на входе: Строка из английский букв, знаков препинания и пробелов.
Не более 1000 символов.
Данные на выходе: Строка из английский букв, знаков препинания и пробелов.
Пример
Данные на входе: Cao, Cao, Cao and Cao!!!
Данные на выходе: Ling, Ling, Ling and Ling!!! 
 */

#include <stdio.h>
#include <string.h>
#define SIZE 10001

// Функция для считывания строки из файла
void input(char *strIn) {
    FILE *in;
    in = fopen("input.txt", "r"); // Открываем файл для чтения
    // Считываем строку из файла до символа перевода строки
    while(fscanf(in, "%[^\n]", strIn) == 1);
    fclose(in); // Закрываем файл
}

// Функция для замены имени "Cao" на "Ling" в строке
void changeName(char *strExt, char *buffer) {
    int count = 0; // Инициализируем счетчик
    // Перебираем символы входной строки
    for(int i = 0; i < strlen(strExt); i++) {
        // Если текущие символы совпадают с "Cao", заменяем их на "Ling"
        if(!memcmp(strExt+i, "Cao", 3)) {
            strcat(buffer, "Ling"); // Добавляем "Ling" к буферу
            count += 4; // Увеличиваем счетчик на длину "Ling"
            i += 3; // Пропускаем проверенные символы
        }
        buffer[count++] = strExt[i]; // Копируем символы из исходной строки в буфер
    }
}

// Функция для записи результата в файл
void output(char *strOut) {
    FILE *out;
    out = fopen("output.txt", "w"); // Открываем файл для записи
    fprintf(out, "%s", strOut); // Записываем строку в файл
    fclose(out); // Закрываем файл
}

int main(int argc, char **argv) {
    char str[SIZE] = {0}, strFinal[SIZE] = {0}; // Объявляем массивы для строк
    input(str); // Вызываем функцию для считывания строки из файла
    changeName(str, strFinal); // Вызываем функцию для замены имени
    output(strFinal); // Вызываем функцию для записи результата в файл
    return 0;
}

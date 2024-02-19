/*
Ling заменить на Cao
В файле .txt дано предложение. Необходимо заменить все имена «Ling» на «Cao» и
результат записать в файл .txt.
Данные на входе: Строка из английских букв, пробелов и знаков препинания.
Не более 1000 символов.
Данные на выходе: Строка из английских букв, пробелов и знаков препинания.
Пример
Данные на входе: Ling, Ling, Ling and Ling!!!
Данные на выходе: Cao, Cao, Cao and Cao!!! 
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

// Функция для замены подстроки str на подстроку str1 в строке strExt
void changeName(char *strExt, char *buffer, char *str, char *str1) {
    int count = 0; // Инициализируем счетчик
    int len = strlen(str); // Вычисляем длину строки str
    int len1 = strlen(str1); // Вычисляем длину строки str1
    // Перебираем символы входной строки
    for(int i = 0; i < strlen(strExt); i++) {
        // Если текущие символы совпадают с подстрокой str, заменяем их на подстроку str1
        if(!memcmp(strExt+i, str, len)) {
            strcat(buffer, str1); // Добавляем подстроку str1 к буферу
            count += len1; // Увеличиваем счетчик на длину строки str1
            i += len - 1; // Пропускаем проверенные символы
        } else {
            buffer[count++] = strExt[i]; // Копируем символ из исходной строки в буфер
        }
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
    char* strLing = "Ling"; // Объявляем строку для замены
    char* strCao = "Cao"; // Объявляем строку для поиска
    changeName(str, strFinal, strCao, strLing); // Вызываем функцию для замены подстроки
    output(strFinal); // Вызываем функцию для записи результата в файл
    return 0;
}

/*
Задача 1. Пары соседних символов
В файле .txt записаны символы. Необходимо разработать функцию, которая
меняет местами пары соседних символов не обращая внимание на символы
пробел. Если количество символов нечетно (пробелы не считаем), то
последний символ не меняем. Результат записать в файл .txt.
Данные на входе: Строка из английских букв, пробелов и знаков
препинания. Не более 1000 символов.
Данные на выходе: Строка из английских букв, пробелов и знаков
препинания.
Пример №1
Данные на входе: Hello world!
Данные на выходе: eHllw orodl!  eHllo owlrd!
Пример №2
Данные на входе: abc def
Данные на выходе: bad cfe  bad ecf
 */

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

// Функция для обмена местами двух символов
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Функция для обработки строки, меняющая местами пары соседних символов
void swapPairs(char *str) {
    int len = strlen(str);
    // Проходим по строке, начиная с первого символа
    for (int i = 0; i < len - 2; i += 2) {
        // Если текущий символ пробел, пропускаем итерацию
        //if (str[i] == ' ') {
			////i++;
            //continue;
        //}
        // Если следующий символ пробел, меняем местами текущий символ и символ после следующего
        if (str[i + 1] == ' ') {
            swap(&str[i], &str[i + 2]);
        } else { // Если оба символа не пробелы, меняем их местами
            swap(&str[i], &str[i + 1]);
        }
    }
}

int main() {
    // Чтение строки из файла
    char str[MAX_LENGTH];
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Ошибка при открытии файла.");
        return 1;
    }
    fgets(str, MAX_LENGTH, inputFile);
    fclose(inputFile);

    // Обработка строки, меняющая местами пары соседних символов
    swapPairs(str);

    // Запись измененной строки в файл
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Ошибка при открытии файла для записи.");
        return 1;
    }
    fprintf(outputFile, "%s", str);
    fclose(outputFile);

    printf("Строка успешно обработана и записана в файл output.txt.");

    return 0;
}

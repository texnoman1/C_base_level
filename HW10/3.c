/*
 Задача 3. Изменить расширение
В файле .txt записан полный адрес файла (возможно, без расширения).
Необходимо изменить его расширение на ".html" и записать результат в файл
.txt.
Данные на входе: Строка состоящая из символов: a-z, A-Z, 0-9, /
Данные на выходе: Исходная строка с измененным расширением.
Пример №1
Данные на входе: /DOC.TXT/qqq
Данные на выходе: /DOC.TXT/qqq.html
Пример №2
Данные на входе: /DOC.TXT/qqq.com
Данные на выходе: /DOC.TXT/qqq.html 
 */

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

// Функция для изменения расширения файла
void change_extension(char *filename) {
    // Находим последнее вхождение слеша в строке
    char *last_slash = strrchr(filename, '/');
    
    // Если слеш найден
    if (last_slash != NULL) {
        // Находим последнее вхождение точки после слеша
        char *last_dot = strrchr(last_slash, '.');
        if (last_dot != NULL) {
            // Заменяем расширение на ".html"
            strcpy(last_dot, ".html");
        } else {
            // Если точка не найдена, просто добавляем ".html" в конец
            strcat(filename, ".html");
        }
    } else {
        // Если слеш не найден, заменяем расширение на ".html"
        char *last_dot = strrchr(filename, '.');
        if (last_dot != NULL) {
            strcpy(last_dot, ".html");
        } else {
            // Если точка не найдена, просто добавляем ".html" в конец
            strcat(filename, ".html");
        }
    }
}

int main() {
    char filename[MAX_LENGTH];
    
    // Считываем строку из файла
    FILE *file = fopen("input.txt", "r");
    fscanf(file, "%s", filename);
    fclose(file);
    
    // Изменяем расширение файла
    change_extension(filename);
    
    // Записываем строку с измененным расширением обратно в файл
    file = fopen("output.txt", "w");
    fprintf(file, "%s\n", filename);
    fclose(file);
    
    return 0;
}

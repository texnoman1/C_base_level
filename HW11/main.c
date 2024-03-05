#include <stdio.h>
#include <stdlib.h>
#include "temp_functions.h"

int main(int argc, char *argv[]) {
    // Проверяем, был ли указан месяц как аргумент командной строки
    if (argc != 2) {
        printf("Usage: %s <month>\n", argv[0]);
        printf("Please specify the month (1-12).\n");
        return EXIT_FAILURE;
    }

    // Преобразуем аргумент в число
    int month = atoi(argv[1]);

    // Проверяем, что месяц находится в допустимом диапазоне
    if (month < 1 || month > 12) {
        printf("Invalid month. Please specify a month in the range 1-12.\n");
        return EXIT_FAILURE;
    }

    // Вызываем функцию для вывода статистики по указанному месяцу
    print_month_stats(month);
    
    return EXIT_SUCCESS;
}

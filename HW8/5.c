/*
 Задача 5. Поменять местами
Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[])
Данные на входе: Функция принимает на вход размер массива и
массив чисел типа int
Данные на выходе: Функция не возвращает значения, измененный
массив сохраняется на месте исходного.
Пример
Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 
Данные на выходе: 10 2 3 4 5 6 7 8 9 1
 */
#include <stdio.h>

#include <stdio.h>

void change_max_min(int size, int a[]) {
    if (size <= 1) {
        return; // Нечего менять, если массив пустой или содержит только один элемент
    }

    int max_idx = 0; // Индекс максимального элемента
    int min_idx = 0; // Индекс минимального элемента

    // Находим индексы минимального и максимального элементов в массиве
    for (int i = 1; i < size; i++) {
        if (a[i] > a[max_idx]) {
            max_idx = i;
        }
        if (a[i] < a[min_idx]) {
            min_idx = i;
        }
    }

    // Меняем местами минимальный и максимальный элементы
    int temp = a[max_idx];
    a[max_idx] = a[min_idx];
    a[min_idx] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Entered data: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    change_max_min(size, arr);

    printf("Sorted data: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

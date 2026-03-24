#include <stdio.h>
#include <locale.h>

void filter_every_third_int(int arr[], int size) {
    int* pointer = arr;
    int* write = arr;
    int count = 0;
    while (pointer < &arr[size]) {
        if (count % 3 == 0) {
            *write = *pointer;
            write++;
        }
        if (count > size / 3) {
            *pointer = 0;
        }
        count++;
        pointer++;
    }

    while (write < &arr[size]) {
        *write = 0;
        write++;
    }
}

void filter_every_third_char(char arr[]) {
    char* pointer = arr;
    char* write = arr;
    int count = 0;
    while (*pointer != '\0') {
        if (count % 3 == 0) {
            *write = *pointer;
            write++;
        }
        count++;
        pointer++;
    }
    *write = '\0';
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Исходный массив чисел: ");
    for (int n : numbers) {
        printf("%d ", n);
    }
    printf("\n");

    filter_every_third_int(numbers, sizeof(numbers) / sizeof(int));

    printf("После изменения: ");
    for (int n : numbers) {
        printf("%d ", n);
    }
    printf("\n");

    printf("\n");

    char line[] = "abcdefgh";

    printf("Исходная строка: %s\n", line);

    filter_every_third_char(line);

    printf("После изменения: %s\n", line);

    return 0;
}
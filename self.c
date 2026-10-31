/*
 * Студент: Мареева Ангелина Ильинична
 * Группа: ПИ 11
 * Назначение: Адреса и указатели
 */

#include <stdio.h>

void order_pair(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(void) {
    int x = 7, y = 4;

    printf("Test 1 before: %d %d\n", x, y);
    order_pair(&x, &y);
    printf("Test 1 after:  %d %d\n", x, y);

    x = -2;
    y = 0;
    printf("Test 2 before: %d %d\n", x, y);
    order_pair(&x, &y);
    printf("Test 2 after:  %d %d\n", x, y);

    x = 5;
    y = 5;
    printf("Test 3 before: %d %d\n", x, y);
    order_pair(&x, &y);
    printf("Test 3 after:  %d %d\n", x, y);

    x = 0;
    y = 0;
    printf("Test 4 before: %d %d\n", x, y);
    order_pair(&x, &y);
    printf("Test 4 after:  %d %d\n", x, y);

    return 0;
}
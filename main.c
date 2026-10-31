/*
 * Студент: Мареева Ангелина Ильинична
 * Группа: ПИ 11
 * Назначение: Адреса и указатели
 */

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int x = 4, y = 7;
    int *p = &x;
    printf("Before: %d %d\n", x, y);
    printf("Value through p: %d\n", *p);
    swap(&x, &y);
    printf("After: %d %d\n", x, y);
    printf("Value through p: %d\n", *p);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    int steps = 0;
    while (x < y) {
        if (y % 2 == 0) {
            y = y / 2;
        } else {
            y = (y + 1) / 2;
        }
        steps++;
    }
    return steps + x - y;
}

int main() {
    int x, y;

    printf("Введіть значення x: ");
    scanf("%d", &x);

    printf("Введіть значення y: ");
    scanf("%d", &y);

    if (x < 0 || y < x || y >= (1 << 31)) {
        printf("Некоректні дані. Переконайтесь, що 0 <= x <= y < 2^31.\n");
    } else {
        int result = minSteps(x, y);
        printf("Мінімальна кількість кроків: %d\n", result);
    }

    return 0;
}

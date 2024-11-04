#include <stdio.h>
#include "my_macros.h" // Підключення заголовкового файлу

int main() {
    int x, y, z;
    float W;
    char ch;

    do {
        puts("Enter integer values for x, y, and z:"); // Запит на ввід
        // Перевірка на успішне зчитування значень
        if (scanf("%d %d %d", &x, &y, &z) != 3) {
            puts("Invalid input. Please enter integers.");
            return 1;
        }

        // Обчислення W залежно від значення z
        if (z > 1) {
            // Якщо z > 1, обчислюємо мінімум
            W = MIN(POW((x - z), 2), x - y);
            puts("Using MIN expression:");
            PRINTR(W);
        }
        else {
            // Якщо z <= 1, обчислюємо максимум
            W = MAX(x - y, y - z);
            puts("Using MAX expression:");
            PRINTR(W);
        }

        // Запит на повторне виконання програми
        puts("Repeat? y/n");
        if (scanf(" %c", &ch) != 1) {
            puts("Error reading input.");
            return 1;
        }
    } while (ch == 'y' || ch == 'Y');

    return 0;
}

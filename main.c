#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    char sym;
    int R;

    printf("Введите символ для построения фигуры: ");
    scanf(" %c", &sym);

    printf("Введите размер R: ");
    scanf("%d", &R);

    printf("\nЗаполненный прямоугольный треугольник:\n\n");

    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", sym);
        }
        printf("\n");
    }

    return 0;
}


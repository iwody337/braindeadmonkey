#include <stdlib.h>
#include <stdio.h>
#define N 4
void main(void)

{

    int A[N] = {0};

    int i = 0, sum = 0;
    printf("Введите массив из %d чисел:\n", N);

    for (i = 0; i < N; i++)
    {
        printf("A[%d]=", i);
        scanf("%d", &A[i]);
    }
    printf("Введеный массив:\n");

    for (i = 0; i < N; i++)
    {
        printf("A[%d]=%d\n", i, A[i]);
    }

    for (i = 0; i < N; i++)
    {

        sum += A[i];
    }
    printf("Сумма всех элементов = %d\n", sum);
}

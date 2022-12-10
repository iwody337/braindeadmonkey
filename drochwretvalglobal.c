#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void fill(int *array, int size);
void printArray(int *array, int size);
int main(void){
    int massOne[SIZE]={0};
    fill(massOne, SIZE);
    printArray(massOne, SIZE);
    int *massTwo=(int*)calloc(SIZE, sizeof(int));
    fill(massTwo, SIZE);
    printArray(massTwo, SIZE);
    
free(massTwo);
exit(EXIT_SUCCESS);
}
void fill(int *array, int size){
    printf("Введи %d элементов: \n", size);
    for (int i=0; i<size; ++i){
        printf("array[%d]= ", i);
        scanf("%d", &array[i]);
    }
}
void printArray(int*array, int size){
    for(int i=0; i<size; ++i){
        printf("array[%d]=%d\n",i,array[i]);
    }
}

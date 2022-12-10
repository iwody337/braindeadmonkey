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





//ЗАПОЛНЕНИЕ МАССИВА РАНДОМНО
 #include <stdio.h>
 #include <time.h>
#include <stdlib.h>
#define SIZE 3
void fillRandom(int *array, int size);
void fill(int *array, int size);
void printArray(int*array, int size);
int main(void){
    int massOne[SIZE]={0};
    //fill(massOne, SIZE);
    fillRandom(massOne, SIZE);
    printArray(massOne, SIZE);
    int *massTwo=(int*)calloc(SIZE, sizeof(int));
    //fill(massTwo, SIZE);
    fillRandom(massTwo, SIZE);
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
void fillRandom(int *array, int size){
    srand(time(NULL));
    for(int i=0; i<size; ++i){
        array[i]=0+rand()%(size-0+1);
    }
}




//РАНДОМ И СОРТИРОВКА
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10
void fillRandom(int *array, int size);
void fill(int *array, int size);
void printArray(int*array, int size);
void bubbleSort(int*array, int size);
int main(void){
    int massOne[SIZE]={0};
    //fill(massOne, SIZE);
    fillRandom(massOne, SIZE);
    printArray(massOne, SIZE);
    bubbleSort(massOne, SIZE);
     printArray(massOne, SIZE);
    //int *massTwo=(int*)calloc(SIZE, sizeof(int));
    //fill(massTwo, SIZE);
   // fillRandom(massTwo, SIZE);
    //printArray(massTwo, SIZE);
    
//free(massTwo);
exit(EXIT_SUCCESS);
}
void bubbleSort(int*array, int size){
    for (int i=0; i < size-1; ++i){//сколько шагов надо сделать 
    for (int j=0; j < size-1-i; ++j){//сколько сравнить
        if (array[j]>array[i]){
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        }
    }
}
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
void fillRandom(int *array, int size){
    srand(time(NULL));
    for(int i=0; i<size; ++i){
        array[i]=0+rand()%(size-0+1);
    }
}

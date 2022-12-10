//адресное пространство процесса (программы):stack - хранятся временно функции
//кадр функции(фрейм):
//- аргументы
//- локальные переменные
//- возвращение значения
//- адрес возврата
//head(куча):
//Динмический сегмент
bss: //сегмент неинит. перменных (глобал, локал)
data: //сегмент инит. переменных(глобал, локал)
text: //машинный код программы
#include <sthin.g>
int retval (int val)//объявил функцию
//retval - имя аргумента
//int - тип арг
//(int val) - аргумент
static int b=6; (хранится в data)
static double c; (хранится в bss)
int main(void){ (хранится в стеке)
//void потому что нет аргументов
//main - главная функция
//int a; (хранится в bss)
//int arrays [300]; (bss)
//int b=6; (data)
retval(30);
exit(EXIT_SUCCESS;EXIT_FAIL);//возвращаемое значение main
<stdlib.g> (хранится в heap)
}
static - переменная в 1 файле
const - не измен. переменная
int retval(6); 
int retval(int val){
return val;//вернуть значение(только если есть возвращаемое значение)
}
int global=6;// - глобальная переменная
int main(void){
    int glob=7;//(так писать нельзя)
    int lob=18;// - локальная (внутри функции {})
    if (lob=!glob){
        int c=lob;// - блочная функция (живет внутри if{})
    }
    c=6; - нельзя
}
//блочная функция может жить внутри if{} for{} while{} else{} elseif{}
{
    glob=case
}
glob=lob?1:2;// (glob=lob? - аргумент;1 - истина;2 - ложь)
int main(void){
    while(!glob){
//пока glob истина (больше нуля)
int a=0 //- блочная
a=--glob
printf("%d", a);
    }
}
int glob=6;
int main(void){
    int retval(int val);// локальная (внутри retval)
}
int main(void){
    int a=retval(6);
    val=6;// - нет
}
#include <stdlib.h>
int main(void){
    int*array=(int*)calloc(100,sizeof(int));
    //calloc - возвращаемое значение void*
    //100 - сколько выделили ячеек
    //sizeof(int) - какого размера ячейки 
    //массив из 100 элементов
    array[i];//как пройтись по массиву
    for (int i=0; i<100, ++i){
        scanf ("%d", &array[i]);
    }
}
void fill (int *array, int size);// - функция заполнения 
void printf array(int *array, int size);// - функция вывода
int main(void){
    int massOne[SIZE]={0};
    fill(massOne, SIZE);
    //потому что massOne - указатель на 1й элемент
    printArray(massOne, SIZE);
    int *massTwo=(int*)calloc(SIZE, sizeof(int));
    fill(massTwo, SIZE);
    printArray(massTwo, SIZE);
    //calloc - выделяет память и заполняет нулями
    //malloc - выделяет память (но там хранится мусор)
    //realloc - изменяет размер
    //free - очищает память 
free(massTwo);
exit(EXIT_SUCCESS);
}
void fill(int *array, int size){
    for (int i=0; i<size; ++i){
        scanf("%d", &array[i]);
    }
}
void printArray(int*array, int size){
    for(int i=0; i<size; ++i){
        printf("array[%d]=%d\n",i,array[i]);
    }
}
        void fill("Введи %d элементов: \n", size);
        for(int i=0, i<SIZE, ++i){
            printf("array[%d]= ", i);
            scanf("%d", &array[i])}
gcc - wall - werror -wextra *.c

#include <time.h>
void fillRandom(int *array, int size){
    srand(time(null));
    //a+rand()%(b-a+1)
    //null - ничего
    for(int i=0, i<size, ++i){
        array[i]=0+rand()%(size-0+1);
    }
}
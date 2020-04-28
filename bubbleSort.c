/*
1.- Comenzamos a hacer la comparación de elementos adyacentes.
2.- Repetimos hasta tener una pasada completa sin ningún 
2.- Repetimos hasta tener una pasada completa sin ningún swap.
*/

#include<stdio.h>

void cambiar_pos(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp; 
}

void bubbleSort(int array_int[], int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j< n-i-1; j++){
            if(array_int[j]>array_int[j+1]){
                cambiar_pos(&array_int[j],&array_int[j+1]);
            }
       }
    }
}
int printArray(int array_int[], int n){
    int i;
    printf("[");
    for(i=0; i<n; i++){
        if(i<n-1){
            printf("%d, ",array_int[i]);
        }else{
            printf("%d",array_int[i]);
        }
    }
    printf("]");
}
int main(int argc, char const *argv[]){
    int array_int[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(array_int)/sizeof(array_int[0]);
    printf("Antes del ordenamiento: ");
    printArray(array_int, n);
    printf("\n");
    bubbleSort(array_int, n);
    printf("Despues del ordenamiento: ");
    printArray(array_int, n);
    printf("\n");
    return 0;
}
//1. Compilar := gcc bubbleSort.c
//2. Ejecutar := ./a.out
//-----------------------------
//=> gcc bubbleSort.c && ./a.out

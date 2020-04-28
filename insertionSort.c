#include <stdio.h> 
#include <math.h> 
  
/* Función de insertion Sort*/
void insertionSort(int arr[], int n) 
{ 
   int i, currentVal, j; 
   for (i = 1; i < n; i++) 
   { 
       currentVal= arr[i]; //obtenemos el valor actual a comparar
       j = i-1;
  
       /* mueve los elementos del arreglo arr[0..i-1],que son mayores que el valor de la posición actual del recorrido, a una posición adelante de su posición actual */
       while (j >= 0 && arr[j] > currentVal) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = currentVal; 
   } 
} 
  
// función auxiliar para imprimir un arrary de tamaño n 
void printArray(int arr[], int n) 
{   int i;
    printf("[");
    for(i=0; i<n; i++){
        if(i<n-1){
            printf("%d, ",arr[i]);
        }else{
            printf("%d",arr[i]);
        }
    }
    printf("]");
} 
  
  
  
/* Driver program to test insertion sort */
int main() 
{ 
    int arr[] = {6, 4, 3, 11, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("Antes del ordenamiento: ");
    printArray(arr, n); 
    printf("\n");
    insertionSort(arr, n); 
    printf("Despues del ordenamiento: ");
    printArray(arr, n); 
    printf("\n");
    
  
    return 0; 
} 
//1. Compilar := gcc insertionSort.c
//2. Ejecutar := ./a.out
//-----------------------------
//=> gcc insertionSort.c && ./a.out

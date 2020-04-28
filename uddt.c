#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{   
    char name[50];
    char id[10];
    float credit;
    char address[100];
};

main (int argc, char const *argv[])
{
    struct client client1 = {0};
    strcpy(client1.name, "Jesus Castellanos");
    strcpy(client1.id, "000000001");
    client1.credit = 1000000;
    strcpy(client1.address, "calle 1, carrera 1 ciudad bolivar");

    printf("The client name is: %s \n", client1.name);
    printf("The client id is: %s \n", client1.id);
    printf("The client credit is: %f \n", client1.credit);
    printf("The client adrdress is: %s \n", client1.address);

    return 0;
};
//1. Compilar := gcc uddt.c
//2. Ejecutar := ./a.out
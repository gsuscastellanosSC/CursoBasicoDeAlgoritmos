#include <stdio.h>

void factoialCiclo(int n){
    int i, ac=1;
    for (i=1;i<=n;i++)
    {
        ac = (i*ac);
    }
    printf("%d! = %ld\n",ac);
}

long factorial(int n){
    if(n==0){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
}
int main(){
    factoialCiclo(6);
    long res;
    int n;
    printf("ingrese el n\n");
    scanf("%d",&n);
    if(n>0){
        res = factorial(n);
        printf("%d! = %ld\n", n, res);
    }else{
        printf("n>0");
    }
    return 0;
}

//=> gcc factorial.c && ./a.out
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *x=malloc(10*sizeof(int));
    x[2]=23;
    printf("%d",x[2]);
    free(x);
}
//Q4
#include<stdio.h>
int i, numeros[3];

int num(){
    for (i = 0; i < 3; i++){
        printf("\nDigite um numero:\n");
        scanf("%d", &numeros[i]);
    }
    return numeros[3];
}
int main(){
    num();
    for(i=0; i<3; i++){
        printf("%d ", numeros[i]);
    }
}
///Q3
#include<stdio.h>
int n1, teste, fat;

int fatorial(int n1){
    if(n1>0){
        teste = 1;
        fat = n1;
        for(int i = 1; i < n1; i++){
            fat = fat*(n1-i);
        }
    }
    else if(n1 == 0){
        teste = 1;
        fat = 1;
    }
    else{
        teste = 0;
    }
    return teste;
}
int main(){
    printf("Calcular Fatotial.\n");
    printf("Digite o numero para saber seu fatorial:\n");
    scanf("%d", & n1);
    teste = fatorial(n1);
    if(teste >= 0){
        printf("O numero %d possui fatorial igual a: %d", n1, fat);
    }
    else{
        printf("Onumero %d não possui fatorial.", n1);
    }
    return 0;
}
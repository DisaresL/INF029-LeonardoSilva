////Q5
#include<stdio.h>
  typedef struct{
     int n1;
     int n2;
     int n3;
     int n4;
 }numeros;

numeros numero;

int ler4numeros(){
    printf("Digite um numero:\n");
    scanf("%d", & numero.n1);
    printf("Digite um numero:\n");
    scanf("%d", & numero.n2);
    printf("Digite um numero:\n");
    scanf("%d", & numero.n3);
    printf("Digite um numero:\n");
    scanf("%d", & numero.n4);
}
int main(){
    ler4numeros();
    printf("Numeros: %d, %d, %d, %d", numero.n1, numero.n2, numero.n3, numero.n4);
}
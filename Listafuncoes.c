/////Q1
#include <stdio.h>
    int n1, n2, sum;
    
int soma(int numero1, int numero2){
    sum = numero1 + numero2;
    return sum;
}
int main()
{
    printf("Programa de soma\n");
    printf("\n\nDigite o primeiro numero:\n");
    scanf("%d", & n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    sum = soma(n1, n2);
    printf("Valor da soma: %d", sum);
    return 0;
}
////////////////
/////Q2
#include <stdio.h>
    int n1, n2, n3, min;
    
int subtrai(int numero1, int numero2, int numero3){
    min = numero1 - numero2 - numero3;
    return min;
}
int main()
{
    printf("Programa de subtração\n");
    printf("\n\nDigite o primeiro numero:\n");
    scanf("%d", & n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);
    printf("Digite o segundo numero:\n");
    scanf("%d", &n3);
    min = subtrai(n1, n2, n3);
    printf("Valor da subtração: %d", min);
    return 0;
}
////////////////
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
//////////////
/////////Q4
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
//////////////////////////////
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

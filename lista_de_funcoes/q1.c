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
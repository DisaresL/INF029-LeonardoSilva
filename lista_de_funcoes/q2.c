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
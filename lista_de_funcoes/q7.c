/////Q7
#include <stdio.h>
char nome1[10], nome2[10], nome3[10];

char ler3palavras(){
    printf("Digite uma palavra:\n");
    scanf("%s", &nome1);
    getchar();
    printf("Digite uma palavra:\n");
    scanf("%s", &nome2);
    getchar();
    printf("Digite uma palavra:\n");
    scanf("%s", &nome3);
}

int main(){
    ler3palavras();
    printf("As tres palavras são:\n%s.\n%s.\n%s.", nome1, nome2, nome3);
}
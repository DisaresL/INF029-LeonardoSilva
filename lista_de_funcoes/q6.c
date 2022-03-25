//////Q6
#include <stdio.h>
char letra1, letra2, letra3;

char ler3letras(){
    printf("digite uma letra:\n");
    scanf("%c", &letra1);
    getchar();
    printf("digite uma letra:\n");
    scanf("%c", &letra2);
    getchar();
    printf("digite uma letra:\n");
    scanf("%c", &letra3);
}
int main()
{
    ler3letras();
    printf("%c, %c, %c.", letra1, letra2, letra3);

    return 0;
#include <stdio.h>
int i1, i2, is;

int main()
{
    printf("Digite sua idade:\n");
    scanf("%d", &i1);
    printf("DIgite a segunda idade:\n");
    scanf("%d", &i2);
    is = i1+i2;
    printf("A soma das idades é: %d", is);

    return 0;
}

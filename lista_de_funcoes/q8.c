/////q8
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int dia_nasc, mes_nasc, ano_nasc;
char cpf[12], nome[50], sexo;

int cadastrarcliente(){
    printf("Digite o nome do cliente:\n");
    fgets(nome, 50, stdin);
    int len = strlen(nome) - 1;
    for (int i = 0; i < len; i++){
        if(nome[i]=='\n'){
            nome[i]=='0';
        }
    }
    getchar;
    fflush;
    printf("Digite A data de nascimento:\n");
    scanf("%d/%d/%d", & dia_nasc, &mes_nasc, &ano_nasc);
    getchar();
    printf("Digite o Sexo do cliente:\n");
    scanf("%c", &sexo);
    printf("Digite O CPF do cliente:\n");
    scanf("%s", &cpf);
}
int main(){
    cadastrarcliente();
    printf("\n Cliente: %s cadastrado\nData de nascimento: %d/%d/%d\nSexo:%c\nCPF:%s", nome, dia_nasc, mes_nasc, ano_nasc, sexo, cpf);
}
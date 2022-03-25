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
}
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
/////q9
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int dia_nasc, mes_nasc, ano_nasc, i;
char cpf[12], nome[50], sexo;

int check_sexo (char sexo){
    if(sexo == (('f')||('F')||('m')||('M')||('o')||('O'))){
        i = 0;
    }
    else{
        printf("\nSexo invalido.\n");
        i = -1;
    }
}

int check_data (int d,int m,int a){
    int mes_fev;
    if( (a%4==0)||((a%100==0)&&(a%400==0)) ){
        mes_fev = 29;
    } else{
        mes_fev = 28;
    }
    if(( (m == 1) || (m ==3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) && (d <= 31) ){
        return 0;

    } else if( (m==2) && (d <= mes_fev) ){
        return 0;

    } else if( ((m == 4) || (m ==6) || (m == 9) || (m ==11)) && (d <= 30) ){
        return 0;
    }
    else{
        printf("\nData invalida!\n");
        return -1; //
    } 
}

int check_cpf(char cpf[12]){
    int icpf[12];  
    int i, somador=0, digito1, result1, result2, digito2, valor;
    for(i=0;i<11;i++){
        icpf[i]=cpf[i]-48;  
    }
    for(i=0;i<9;i++){  
        somador+=icpf[i]*(10-i);  
    }    
    result1=somador%11;    
    if( (result1==0) || (result1==1) ){  
        digito1=0;  
    } else{  
        digito1 = 11-result1;  
    }
    somador=0;
    for(i=0;i<10;i++){  
        somador+=icpf[i]*(11-i);  
    }  
    valor=(somador/11)*11;  
    result2=somador-valor;
    if( (result2==0) || (result2==1) ){  
        digito2=0;  
    } else{  
        digito2=11-result2;  
    }  
    if((digito1==icpf[9]) && (digito2==icpf[10])){  
        return 0;  
    } else{  
        printf("\nCFP Inválido!\n");
        return -1;  
    }   
}

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
    i = -1;
    do{
        printf("Digite A data de nascimento:\n");
        scanf("%d/%d/%d", & dia_nasc, &mes_nasc, &ano_nasc);
        getchar();
        i = check_data(dia_nasc, mes_nasc, ano_nasc);
    }while(i == -1);
    i == -1;
    do{
        printf("Digite o Sexo do cliente:\n");
        scanf("%c", &sexo);
        i = check_sexo(sexo);
    }while(i == -1);
    i = -1;
    do{
        printf("Digite O CPF do cliente:\n");
        scanf("%s", &cpf);
        i = check_cpf(cpf);
    }while(i == -1);    
    
}
int main(){
    cadastrarcliente();
    printf("\n Cliente: %s cadastrado\nData de nascimento: %d/%d/%d\nSexo:%c\nCPF:%s", nome, dia_nasc, mes_nasc, ano_nasc, sexo, cpf);
}

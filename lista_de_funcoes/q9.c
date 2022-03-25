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
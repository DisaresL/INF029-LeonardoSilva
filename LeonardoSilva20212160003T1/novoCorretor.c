#include<stdio.h>
#include<string.h>

//renomeie o arquivo do include abaixo para PrimeiroUltimoNomeMATRICULA.h
#include "LeonardoSilva20212160003T1.h"

void testQ1();
void testQ2();
void testQ3();
void testQ4();
void testQ5();
void testQ6();

int main(){
  printf("q1\n");
  testQ1(); // 10 testes
  printf("q2\n");
  testQ2(); // 35 testes
  printf("q3\n");
  testQ3(); // 13 testes
  printf("q4\n");
  testQ4(); // 22 testes
  printf("q5\n");
  testQ5(); // 10 testes
  printf("q6\n");
  testQ6(); // 10 testes 
    
    
}

void testQ1(){

  char str[11];
  strcpy(str,"29/02/2015");
  printf("%d\n",q1(str));
  strcpy(str,"29/02/2012");
  printf("%d\n",q1(str));
  strcpy(str,"9/13/2014");
  printf("%d\n",q1(str));
  strcpy(str,"45/4/2014");
  printf("%d\n",q1(str));
  strcpy(str,"12/1/15");
  printf("%d\n",q1(str));
  strcpy(str,"1/9/2016");
  printf("%d\n",q1(str));
  strcpy(str,"//2016");
  printf("%d\n",q1(str));
  strcpy(str,"1//20");
  printf("%d\n",q1(str));
  strcpy(str,"1/R/2016");
  printf("%d\n",q1(str));
  strcpy(str,"1/12/19");
  printf("%d\n",q1(str));
}
void testQ2(){
  char datainicial[11], datafinal[11];
  int qtdDias, qtdMeses, qtdAnos;
  DiasMesesAnos dma;
  int retorno;

  //teste 1
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial, "01/06/2015");
  strcpy(datafinal, "01/06/2016");
  dma = q2(datainicial, datafinal);
  printf("%d\n", dma.retorno); 
  printf("%d\n", dma.qtdDias); 
  printf("%d\n", dma.qtdMeses); 
  printf("%d\n", dma.qtdAnos); 

  //teste 2 - retornos
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial,"01/30/2015");
  strcpy(datafinal,"01/06/2016");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 

  strcpy(datainicial,"01/3/2015");
  strcpy(datafinal,"40/06/2016");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 

  strcpy(datainicial,"01/06/2016");
  strcpy(datafinal,"01/06/2015");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 

  //teste 3
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial,"06/06/2017");
  strcpy(datafinal,"07/07/2017");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 
  printf("%d\n",dma.qtdDias); 
  printf("%d\n",dma.qtdMeses); 
  printf("%d\n",dma.qtdAnos); 

  //teste 4
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial,"06/06/2017");
  strcpy(datafinal,"05/07/2018");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 
  printf("%d\n",dma.qtdDias); 
  printf("%d\n",dma.qtdMeses); 
  printf("%d\n",dma.qtdAnos); 

  //teste 5
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial,"26/07/2017");
  strcpy(datafinal,"25/08/2017");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 
  printf("%d\n",dma.qtdDias); 
  printf("%d\n",dma.qtdMeses); 
  printf("%d\n",dma.qtdAnos); 

  //teste 6
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial,"26/06/2017");
  strcpy(datafinal,"26/07/2017");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 
  printf("%d\n",dma.qtdDias); 
  printf("%d\n",dma.qtdMeses); 
  printf("%d\n",dma.qtdAnos); 

  //teste 8
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial,"27/02/2016");
  strcpy(datafinal,"03/03/2017");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 
  printf("%d\n",dma.qtdDias); 
  printf("%d\n",dma.qtdMeses); 
  printf("%d\n",dma.qtdAnos); 

  //teste 9
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial,"27/02/2015");
  strcpy(datafinal,"03/03/2016");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 
  printf("%d\n",dma.qtdDias); 
  printf("%d\n",dma.qtdMeses); 
  printf("%d\n",dma.qtdAnos); 

  //teste 10
  qtdDias = -1;
  qtdMeses = -1;
  qtdAnos = -1;

  strcpy(datainicial,"28/01/2016");
  strcpy(datafinal,"29/02/2016");
  dma = q2(datainicial, datafinal);
  printf("%d\n",dma.retorno); 
  printf("%d\n",dma.qtdDias); 
  printf("%d\n",dma.qtdMeses); 
  printf("%d\n",dma.qtdAnos); 
}

void testQ3(){
  char str[250];
  strcpy(str,"Renato Lima Novais");
  printf("%d\n",q3(str, 'a', 0) ); 
  printf("%d\n",q3(str, 'b', 0) ); 
  printf("%d\n",q3(str, 'l', 1) ); 
  printf("%d\n",q3(str, 'l', 0) ); 
  printf("%d\n",q3(str, 'L', 0) ); 

  strcpy(str,"Letícia, signifiCa fEliCIdADE");
  printf("%d\n",q3(str, 'c', 0) ); 
  printf("%d\n",q3(str, 'C', 0) ); 
  printf("%d\n",q3(str, 'c', 1) ); 
  printf("%d\n",q3(str, 'C', 1) ); 
  printf("%d\n",q3(str, 'R', 0) ); 
  printf("%d\n",q3(str, 'e', 0) ); 
  printf("%d\n",q3(str, 'E', 1) ); 
  printf("%d\n",q3(str, 'S', 1) ); 
    
}

void testQ4(){
  char strTexto[250];
  char strBusca[50];
  int posicoes[30];
  
  //int i;
  //for (i = 0; i<30; i++){
      //posicoes[i] = -1;
  //}

  strcpy(strTexto,"Laboratorio de programacao: para ratos de programação");
  strcpy(strBusca,"rato");
  printf("%d\n",q4(strTexto, strBusca, posicoes));
  printf("%d\n",posicoes[0]); 
  printf("%d\n",posicoes[1]); 
  printf("%d\n",posicoes[2]); 
  printf("%d\n",posicoes[3]); 

  
  //for (i = 0; i<30; i++){
      //posicoes[i] = -1;
  //}

  strcpy(strTexto,"Ola, o mundo e muito grande. Tem muitas pessoas, e muitos problemas");
  strcpy(strBusca,"mui");
  printf("%d\n",q4(strTexto, strBusca, posicoes) ); 
  printf("%d\n",posicoes[0]); 
  printf("%d\n",posicoes[1]); 
  printf("%d\n",posicoes[2]); 
  printf("%d\n",posicoes[3]); 
  printf("%d\n",posicoes[4]); 
  printf("%d\n",posicoes[5]); 

  
  //for (i = 0; i<30; i++){
      //posicoes[i] = -1;
  //}

  strcpy(strTexto,"Programar é legal?");
  strcpy(strBusca,"sim");
  printf("%d\n",q4(strTexto, strBusca, posicoes));

  //for (i = 0; i<30; i++){
      //posicoes[i] = -1;
  //}

  strcpy(strTexto,"maraaaavilha, meu prograaaama funcionou");
  strcpy(strBusca,"aa");
  printf("%d\n",q4(strTexto, strBusca, posicoes)); 
  printf("%d\n",posicoes[0]); 
  printf("%d\n",posicoes[1]); 
  printf("%d\n",posicoes[2]); 
  printf("%d\n",posicoes[3]); 
  printf("%d\n",posicoes[4]); 
  printf("%d\n",posicoes[5]); 
  printf("%d\n",posicoes[6]);
  printf("%d\n",posicoes[7]);
  
}


void testQ5(){
  printf("%d\n",q5(345));
  printf("%d\n",q5(78));
  printf("%d\n",q5(3));
  printf("%d\n",q5(5430));
  printf("%d\n",q5(1000));
  printf("%d\n",q5(0));
  printf("%d\n",q5(707));
  printf("%d\n",q5(80));
  printf("%d\n",q5(8));
  printf("%d\n",q5(1234));
}

void testQ6(){
  printf("%d\n",q6(34567368, 3));
  printf("%d\n",q6(34567368, 4576));
  printf("%d\n",q6(3539343, 3));
  printf("%d\n",q6(3539343, 39));
  printf("%d\n",q6(5444, 44));
  printf("%d\n",q6(54444, 44));
  printf("%d\n",q6(1234562354, 23));
  printf("%d\n",q6(1234, 13));
  printf("%d\n",q6(544444, 4));
  printf("%d\n",q6(1234562354, 32));

}
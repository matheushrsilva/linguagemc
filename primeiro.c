/*
este programa pede ao usuario um numero qualquer e depois exibe um numero na tela

*/
#include <stdio.h> // estamos importando uma biblioteca para trabalhar com

int main(){
    int idade; //declaraçao da variavel idade do tipo inteira 
    printf("digite a sua idade e tecle enter\n");
    scanf("%d",&idade); // para pegar o numero digitado pelo usuario
                         //estamos usando comando scanf e adicionando
                        //o valor digitado ao endereço de memoria
                        //da variavel iadde usamos e-comercial para
                        //referencia o endereço de memoria da variavel 
                        //idade 

    printf("a idade digitada é %d\n endereço da variavel idade %x\n" ,idade, &idade);       
    return 0;            
}
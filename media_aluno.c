/*
neste programa iremos calcular a nota media do
aluno.Teremos a entrada de 4 notas, depois
sera feito o calculo da media, onde iremos
somar as notas e depois dividir por 4 
se aluno tiver uma media acima ou igual a 7
entao estara aprovado; caso o aluno de tenha
uma nota menor ou igual a 4 entao aluno
estara reprovado; caso contrario estara em recuperação
*/
#include <stdio.h>

int main(){
    float n1,n2,n3,n4,md;
    printf("digite a primeira nota \n");
    scanf("%f", &n1);

    printf("digite a segunda nota: \n");
    scanf("%F",&n2);

    printf("digite a terceira nota: \n");
    scanf("%f",&n3);

    printf("digite a quarta nota \n");
    scanf("%f",&n4);

    md = (n1+n2+n3+n4) /4;

    printf("a nota media do aluno e %2.2f\n",md);

    if( md >= 7){
        printf("aprovado\n");
    }
    else if( md <= 4){
        printf("reprovado\n");
    }
    else{
        printf("recuperação\n");
    }
    return 0;
}
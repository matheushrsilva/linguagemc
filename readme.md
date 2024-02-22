# estudo da linguagem C
## neste repositorio sera e publicado arquivos escritos em C


<img src="https://giovanidacruz.com.br/wp-content/uploads/2022/11/C-programming-1024x530-1.jpg" 
height="300" width="1000">


### Abaixo sera apresentado os arquivos deste repositorio

### hello.c

```c
#include <stdio.h>
int main(){
    printf("hello,world\n");
    return 0;
}
```

#### primeiro.c
```c
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
```

#### operaçoes.c

```c
#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;

    printf("digite um numero e tecle enter: \n");
    scanf("%d" ,&n1);

    printf("digite um numero e tecle enter:\n");
    scanf("%d" ,&n2);

    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("o resultado da soma é %d\n" ,soma);
    printf("o resultado da subtração é %d\n",subtrair);
    printf("o resultado da multiplicaçao é %d\n", multiplicar);
    printf("o resultado da divisao é %d\n", dividir);

    return 0;
}
```

#### desconto_produto.c

```c
#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;

    printf("digite um numero e tecle enter: \n");
    scanf("%d" ,&n1);

    printf("digite um numero e tecle enter:\n");
    scanf("%d" ,&n2);

    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("o resultado da soma é %d\n" ,soma);
    printf("o resultado da subtração é %d\n",subtrair);
    printf("o resultado da multiplicaçao é %d\n", multiplicar);
    printf("o resultado da divisao é %d\n", dividir);

    return 0;
}
```

#### nota.c

```c
#include<stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    printf("digite a nota1: \n");
    scanf("%f",&nota1);
    
    printf("digite a nota2: \n");
    scanf("%f",&nota2);

    printf("digite a nota3: \n");
    scanf("%f",&nota3);

    printf("digite a nota4: \n");
    scanf("%f",&nota4);

    media = (nota1 + nota2 + nota3 + nota4) /4.0;

    printf("a media do aluno e:%.2f: \n" ,media);

    return 0;
}
```
#### desvio de fluxo: parimpar.c

```c
#include <stdio.h>


int main(){
    int num;
    printf("digite um numero: \n");
    scanf("%d",&num);

    if( num %2 == 0){
        printf("este numero é par \n");
    }
    else{
        printf("este numero é impar \n");
    }
    return 0;
}
```

#### desvio de fluxo media_aluno.c
```c
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
```

#### while bissexto

```c
#include <stdio.h>

int main(){


    int ano = 1950;
    int qtd = 0;
    
    while( ano <=2024){
        if( ano % 4 == 0){
            printf("o ano %d é bissexto\n",ano);
            qtd++;
        }
        ano++;
    }
    printf("temos %d anos bissextos\n",qtd);
    return 0;
}
```

#### whilw dec bin

```c
#include <stdio.h>
int main(){
    int dec = 24;
    int resto = 0;
    int pos = 1;
    int rs = 0;
    while( dec > 0){
        resto = dec %2;
        dec = dec /2;
        rs = rs + pos * resto;
        pos = pos * 10;
    }
    printf("%d\n",rs);
    return 0;
}
```

#### while1 .c
```c
#include <stdio.h>
      int main(){

        int i = 0;
        while(i <= 10){
            printf("%d\n",i);
            i++;
        }
        return 0;
      }
```
#### tabuada.c

```c
#include<stdio.h>


int main(){
    int num, num2;
    printf("digite um numero para a tabuada:\n");
    scanf("%d",&num);
    for(num2 = 1 ; num2 <= 10 ; num2++){
    printf("%d x %d = %d\n",num,num2,(num*num2)); 
    }
    return 0;
}
```

#### for.c
```c
#include<stdio.h>

int main(){
    int x;
    for(x = 1; x <=10; x++){
        printf("%d\n", x);

    }
    return 0;
}
```
#### coleçoes_iguais.c

```c
#include<stdio.h>
 
int main(){
    int c1[10] = {10,5,68,8,47,12,54,13,62,11};
 
    int c2[15] = {11,5,62,112,84,76,12,55,59,85,13,0,14,19,18};
 
      int i, j;
    int found = 0; 
 
    printf("Números iguais nos dois arrays:\n");
 
    
    for (i = 0; i < 10; i++) {
        
        for (j = 0; j < 15; j++) {
            if (c1[i] == c2[j]) {
                printf("%d\n", c1[i]);
                found = 1;
                break;
            }
        }
    }
 
}
```
#### coleçao1.c

```c
#include<stdio.h>

int main(){
    int valores[5] = {10,5,8,12,7};
    printf("%d\n",valores[0]);

    return 0;
}
```

#### coleçao2.c

```c
#include<stdio.h>
int main(){
 
    int loud[10] = {1,21,11,8,19,45,7,24,26,18};
    int soma=0, media=0, i;
    for( i=0 ; i <= 9 ; i++ ){
        soma += loud[i];
    }
    printf("O resultado da soma é %d\n",soma);
 
    for(i = 0 ; i < 10 ; i++){
        media += loud[i];
    }
    printf("O resultado da média é %d\n",(media/10));
    for(i = 0 ; i< 10 ; i++){
        if( loud[i] % 2 == 0){
            printf("%d\n",loud[i]);
        }
    }
 
return 0;
 
}

```

#### base

```c
#include<stdio.h>

int main(){
    int base,expoente, i , b;
    printf("digite um numero para a base:\n");
    scanf("%d", &base);

    printf("digite um numero para o expoente");
    scanf("%d",&expoente);

b=base;
for(i =1 ; i<expoente ; i++){
base =  base *b;


}
   
printf("%d",base);
return 0;
}
 ```

 #### pass_por_ref

 ```c
 #include<stdio.h>

int subtrair(int *x, int *y){
    printf("posição x %p e posiçao Y %p\n",x,y);
    return *x - *y;
}


int main(){

    int v1 = 10;
    int v2 = 5;
    printf("posiçao de v1 %p e posiçao de v2 %p\n",&v1,&v2);
    int rs = subtrair(&v1,&v2);
    printf("resultado é %d\n",rs);
    return 0;
}
```

#### pass_por_valor

```c
#include<stdio.h>
int subtrair(int x, int y){
    printf("Posição x é %p e y é %p\n",x,y);
    return x - y;
}
 
int main(){
    int v1 = 10;
    int v2 = 5;
    printf("posiçao v1 e %p e v2 e %p\n",&v1,&v2);
    int rs =  subtrair(v1,v2);
    printf("O resultado é %d\n",rs);
    return 0;
}
```
#### primeiro.h
```c
#include<sdtio.h>

int quadrado(int x, int y){
    return x* y;
}
```
#### principal.c
```c
#include<stdio.h>
#include "primeiro.h"


int main(){
      int rs = quadrado(5,7);
      printf("a area do quadrado de 5 e 7 e %d\n",rs);
      return 0;
}
```


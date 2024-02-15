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

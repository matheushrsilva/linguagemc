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
    



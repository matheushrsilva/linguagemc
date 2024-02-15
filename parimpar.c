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
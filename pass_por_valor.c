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
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
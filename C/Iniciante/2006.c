#include <stdio.h>
 
int main() {
    int certas=0, tipo;
    int resp[5];
    
    //printf("Tea type:\n");
    scanf("%d", &tipo);
    //printf("Five answers:\n");
    for (int i=0; i<5; i++){
        scanf("%d", &resp[i]);
    }
    for (int i=0; i<5; i++){
        if(resp[i] == tipo){
            certas++;
        } 
    }
    printf("%d\n", certas);
    return 0;
}
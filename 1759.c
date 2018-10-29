#include <stdio.h>

int main(){
int qtd, i;

scanf("%i", &qtd);
for(i=0; i<qtd; i++){
    if(i == (qtd-1)){
        printf("Ho");
    }else{
        printf("Ho ");
    }
}
printf("!\n");
}

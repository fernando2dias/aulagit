#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int cases, number, i;

scanf("%i", &cases);
for(i=0; i<cases; i++){
    scanf("%i", &number);
    if(number>0 && (number%2 ==0)){
        printf("EVEN POSITIVE\n");
    }
    if(number>0 && (number%2 !=0)){
        printf("ODD POSITIVE\n");
    }
    if(number<0 && (number)%2 ==0){
        printf("EVEN NEGATIVE\n");
    }
    if(number<0 && (number)%2 !=0){
        printf("ODD NEGATIVE\n");
    }
    if(number==0){
        printf("NULL\n");
    }

}
}

#include <stdio.h>


int function(int a ,int  b){
    
 return    a > b ? a : b;

     
}
int main(){

int num1;
int num2;

printf("entrez nomber 1 :");
scanf("%d", &num1);

printf("entrez nomber 2 :");
scanf("%d", &num2);

int max = function(num1 , num2);

printf("le maximum  est : %d", max);

    return 0;
}
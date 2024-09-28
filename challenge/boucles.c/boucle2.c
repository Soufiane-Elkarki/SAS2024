#include <stdio.h>

int main(){

    int num ;
    int res = 1;

    printf("Entrez un nomber :");
    scanf("%d", &num);

    if (num <= 0 )
    {
        printf(" entrer un nombre entier positif .");
    }
    else{

        for (int  i = num ; i > 0 ; i--) 

        res *= i ;
    }
    
    printf("%d! = %d\n",num, res);
    

    return 0;
}
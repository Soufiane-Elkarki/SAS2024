#include <stdio.h>

int main(){

    long int num ;
    long long int res = 1;

    printf("Entrez un nomber :");
    scanf("%d", &num);

    if (num < 0 )
    {
        printf(" entrer un nombre entier positif .");
    }
    else{

        for (int  i = 1 ; i <= num ; ++i ) {

        res *= i ;
        }
    }
   
    printf("%ld! = %lld\n",num, res);
    

    return 0;
}
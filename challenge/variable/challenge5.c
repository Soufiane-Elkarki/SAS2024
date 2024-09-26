#include <stdio.h>
int main(){

     float C;
    

    printf("donner moi un temperature en Celsius : ");
    scanf("%f", &C );

    if (C < 0){
        printf("l'état de l'eau est : Solid");
    }else if (0 <= C && C <100)
    {
        printf("l'état de l'eau est : Liquide");
    }else if (C >= 100)
    {
        printf("l'état de l'eau est : Gaz");
    }

    return 0;
}
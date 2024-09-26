#include <stdio.h>
#include <math.h>

int main(){

    double a;
    double b;
    double c;

    double delta;
    double x1;
    double x2;



    printf("Entrez le le coefficient a :  ");
    scanf("%lf", &a);

    if (a == 0)
    {
        printf("Le coefficient 'a' ne peut pas etre nul.\n");

        return 1;
    }
    printf("Entrez le coefficient b :");
    scanf("%lf", &b);
    printf("Entrez le coefficient c :");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c ;
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta ))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        printf("les solutionns est : %.2f et %.2f", x1 , x2);
    }else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("la solution est : %.2f", x1);
    }else{
        printf("Pas de solution .");
    }
    

    return 0;
}
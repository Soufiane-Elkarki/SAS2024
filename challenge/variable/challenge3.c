#include <stdio.h>
int main(){

float distance;
float yards;

printf("donner moi un distance en kilometres : ");
scanf("%f", &distance );

yards =  distance * 1093.61;
printf("la distance en yards est : %.2f",yards);

return 0;
}
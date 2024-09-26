#include <stdio.h>

int main(){

   char  c;

   printf("Entrez un caractere : ");
   scanf("%c", &c);

   switch (c)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'O':
   case 'I':
   case 'U':
    printf("%c est une voyelle . ", c);
    break;
   
   default:
        printf("%c est pas une voyelle .");
    break;
   }
    return 0;
}
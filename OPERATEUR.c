#include<stdio.h>


int main (void)
{
   char a;
   a = getchar();//sert a lire un unique caractere tape au clavier par l utilisateur
   printf("%c\n",a);
   unsigned short test = 45;
   printf("%d\n",sizeof(test));//affiche taille d une variable en octet
   



   int b = 4+5*5/1;//*et / d abord ensuite mois et plus comme en math
   int c = 35%25;// retourne reste marche que sur entier
   int d = b - c;
   printf("%d\n",d);
   



    return 0;
}
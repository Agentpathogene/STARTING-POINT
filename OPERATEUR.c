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
   



   unsigned int var0 = 10;
   unsigned int var = 3;
   double var1 = (float)var0 / var;//on apelle ca un cast en gros
   //le temps d une instruction on transforme var0 en float ca perment d avoir nb apres virgule


   unsigned char ma_var = 5;
   //5 en binnaire donne 00000101
   //10 en binnaire 00001010
   var = var & 10;//1 et 0 = 0 c est une comparais on bit a bit 0 et 0 =0 1 et 1 = 1
   //00000000


 //on a aussi le ou | lui 1 ou 0 donne 1 aussi
 //on a aussi le l operateur xor ^ lui si bit identique = 0 si 1 0 = 1
//on a aussi  operateur tild ~ il inverse les bit transforme 0 en 1 et vice versa

//on a aussi >> et << qui decale de nb de case demande les bits vers la gauche ou droite
//ce qui depasse etant rejete pas mis au debut




//tout ces operateur peuvent prendre raccourci 1 genre car += 5








   /* ----------------------------------------------------
 *              GRILLE DE LECTURE BINAIRE (1 Octet)
 * ----------------------------------------------------
 *  Valeur : | 128 |  64 |  32 |  16 |  8  |  4  |  2  |  1  |
 *  Bits   : |  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |
 * ----------------------------------------------------
 *  Astuce : Additionne uniquement les valeurs qui ont un 1.
 *  Exemple: 00001101 -> 8 + 4 + 1 = 13
 * ---------------------------------------------------- */






    return 0;
}

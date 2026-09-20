/*DEBUT D UNE SERIE VIDEO/LECON EN C :
EPISODE 1 :>
VARIABLE
OPERATEURS
DIRECTIVES DE PREPROCESSEURS */
#include<stdio.h>


int main (void)
{
   


  int ma_variable = 10;//ENTIER DE 4 OCTET OU  BITS SOIT UN NB ENTIER STANDART J'USQUA 2MILLIARDS
  //ma_variable EST DE TYPE ENTIER SIGNER CTDIRE QU ELLE PEUX CONTENIR DES NB POSITIFS OU NEGATIFS
  char caractere;//DECLINAISON DU TYPE ENTIER IL SERT A STOCKER UN OCTET SIGNE DONC UN CARACTERE TEXTE
  //CAR LA TABLE ASCI ASSOCIE CHAQUE NB (ENTRE -128 ET 127 SOIT 1 OCTET) A UN CARACTERE TEXTE 
  short sho;//STOCKE 2 OCTETS(-32768 a +32767)
  long lon;//STOCKE 8 OCTET(-9trillons a +9 trillons)
 


  //on peu faire des variable non signees donc seulements positives
  //ou egales a zero l espace negatif est alors rendu disponible dans 
  //le positif doublant l'espace de stockage , ex un char unsigned pourra
  //stoke un nombre de 0 a 255 au lieu de 127
  unsigned char ma_var;


  //la variable float = nb a virgule sur 4 octet et double sur 8 octets
  float mavar = 10.264f;//en gros 7 chiffre au total en comptant avant et apres virgule le f precise juste type float pour empecher le 
  //double par default
  double othervar = 12.644554544;//ici on a 15 chiffres au total

  printf("hello world!\n");
  printf("la valeur de ma_variable = %d\n",ma_variable);
  /* char = %hhd => valeur , int = %d , short = %hd , long = %ld , unsigned char = %hhu
    unsigned int = %u , unsigned char = %hhu , unsigned long = %lu , 
    char = %c => caractere, float = %f, double = %lf */
  //LE LANGUAGE C EST SENSIBLE A LA CASSE
  //LE NOM D UNE VARIABLE PUEUX PAS COMMENCER PAR 0
  //QUAND ON INITIALISE UNE VARIABLE SANS DONNER DE VALEUR ELLE CONTIENT UNE VALEUR PAR DEFAULT
  //QUI TRAINE EN MEMOIRE









  return 0;
}




#include<stdio.h>


int main (void)
{
  

    //METHODE DE MASK oN APPLIQUE UN MASK DE BIT CHOISI POUR FORCER LE TRANSFORMATION VOULUE
    unsigned char variable = 10;//un unsigned char pour parrel peu contenir un entier j usqua 255 (2exp8 un octet quoi) soit un seul caractere de table asci2 
    // 10 = 00001010 en un octet binnaire
    //pour transformer du binnaire on a 2 operateurs
    // & le et bit a bit renvoi 1 si les 2bit compare valent 1 sinon 0
    // | ou bit a bit renvoi 1 si au moins un des 2bit vaux 1 sinon 0
    printf("variable %hhu\n ",variable);
    variable = variable | 0x4;
    printf("variable = %hhu\n",variable); 
    //Pour forcer un bit a 0
    unsigned char value =10;
    value &= 0xf7;//racourci syntaxique de value = value & 0xf7
    printf("valeur de value : %hhu\n",value);


    //METHODE DES DECALAGE 
    unsigned char variable2 = 10;
    //on prend le chiffre 1 (00000001) on decale de 2bit a gauche ca donne (00000100)rappel on decale et quand ca depass c est perdu...
    variable2 = variable2 | (1 << 2);


    //INVERSER TOUT LES BITS (operateur ~ )
    unsigned char inverse = 10;
    printf("Valeur de inverse %d\n",inverse);
    inverse = ~inverse;
    printf("Nouvelle valeur de inverse %d\n",inverse);


    //ON PEUX EVIDEMMNET CHAINER LES MASKS
    unsigned char lol = 10;
    lol |= 0x40 | 0x01;//ATTENTION LE COMPILATEUR COMMENCE PAR FUSSIONER MASK A DROITE ET APPLIQUE LE OU A LOL
    printf("Valeur de lol :%d\n",lol);

    //AFFICHER LES BITS D UNE VAR
    int var = 10;
    for (int i =7; i >=0; i--)
    {
        printf("bit numero %d : %d\n",i,(var >> i)&1);
    }

    //TECHNIQUE MASK POUR AFFICHER BITS
    for (int i = 128;i>0;i/=2)
    {
        printf("le bit numero %d : vaut %d\n",i,(var & i)==i);
    }












    return 0;
}
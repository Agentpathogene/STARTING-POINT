#include<stdio.h>
enum Couleur 
{
    rouge,//0
    jaune,//1
    bleu,//2
    vert = 5,
    mauve = 0x56//3  ces valeur sont assigne de maniere incremental par
    //default on constante mais on peu mettres celles qu on veut ..
    //ATTENTION VALEUR INCREMENTE PAR RAPPORT A DERNIERE GENRE SI ON AURAIT DONNE
    //AUCUNE VALEUR A MAUVE ELLE AURAIT VALUE 6
};

int main (void)
{

    printf("Valeur de bleu : %d\n",bleu);
    printf("valeur de vert : %d\n",vert);
    printf("Valeur de mauve : %d\n",mauve);
    enum Couleur lol;
    lol = rouge;
    int lol2;
    lol2 = bleu;
    printf("valu of lol2 : %d\n",lol2);
    printf("value de lol : %d\n",lol);



    return 0;
}
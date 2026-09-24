/*PETITE LECON SUR LES CONDITIONS EN C */

#include<stdio.h>


int main (void)
{

    int test1 = 10;

    if (test1 == 10 || test1 > 14)
    {
        printf("Le code est execute car une des condition est vraie ce qui est requis pour l operateur ou || \n");

    }
    if (test1 == 10 && test1 > 14)
    {
        printf("Code non execute car les deux conditions sont pas execute comme demander par l operateur && \n");
    }
    else //NOTER QUE LE ELSE N ES ASSOCIE TOUJOURS QU AU IF DU DESSUS
    {
        printf(">Else condition \n");
    }


    //autre syntaxe
    int res = 0;
    if (test1 % 2 == 0)
       res = 5;//LES ACCOLADES SONT FACULTATIVE MAIS QU AVEC 1 LIGNE D INSTRUCTION !!!!
    else
       res = 10;
       printf("%d\n",res);




    //autre syntaxe
    res = test1%2 == 0 ? 5 : 10;//condition ? expression_si_vrai : expression_si_faux ; ce sont des operateurs ternaire
    res = test1%2 == 0 ? printf("hello\n") : printf("pas hello\n");
    printf("VALEUR DE RES ::>>%d\n",res);







    // *------------ LE --- SWITCH ------------
    int var_dontjeveux_tester_valeur;
    switch(var_dontjeveux_tester_valeur)
    {
        case 1: // ===> si notre variable vaux 1 
               //code a executer
               //on peu mettre plusieurs lignes
               break;//pour sortir du switch sinon n importe quel case sera execute apres le case valid ...
        case 2:// ===> si notre variable vaux 2

        default:
               //code execute si var n entre pas dans un des cases
    }










    return 0,1;
}
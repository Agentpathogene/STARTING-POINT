#include<stdio.h>
#define until(conditi__on) while(!(conditi__on))
int main (void)
{

//PREMIERE TECHNIQUE DE CONDITION UN PEU ARCHAIQUE MAIS TROP DROLE
    int i = 0;
_etiquette:  //definir un breakpoint 
    if(i<5)
    {
        printf("lol code voici i %d\n",i);
        i++;
        goto _etiquette;
        
    }


//LE WHILE LA BOUCLE UNIVERSELLE ( TANT QUE )
    int a = 0;
    while(a<5)
    {
        printf("while boucle voivi a %d\n",a);
        a++;
    }

//LA FAMEUSE BOUCLE FOR
    int b = 0;
    int j;
    for (b = 0 , j = 0; b < 6 && j < 0; b+=2)//on peu initialise 2 var et les incrementer
    //mais faut faire attention a condition central on  peu les geres avec && ou ||
    {
        printf("La bouvle for b = %d\n",b);
    }
    
    
//BOUCLE DO WHILE (tand que la condition et vraie)
    int c;
    c = 0;
    do //la difference est que ca garantie une execution avant test de condition
    {
        printf("Boucle do while c vaux %d\n",c);
        c += 1;
 
    }while(c<5);

//BOUCLE DO UNTIL (tant que condition est fausse) existe pas en c mais peu se cree avec un define
    int d;
    d = 0;
    do 
    {
        printf("boucle until d value = %d\n",d);
        d++;
    }until(d >= 5); //en gros sera remplace par while(!(d >= 5)) a la compilation


//LE BREAK ET LE CONTINUE
    int e = 0;
    while(e < 3)
    {
        if(e == 3)
        {
            printf("i vaux 3\n");
            break;
          
        }
        printf("e vaux : %d\n",e);
        e++;
        continue;//n execute pas le code apres reprend directement le while
        printf("je suis code inutil present pour faire chier\n");
    }




    return 0;
}








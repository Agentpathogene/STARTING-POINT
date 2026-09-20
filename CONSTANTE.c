#include<stdio.h>
#define PI 3.14//le preprocesseur (gcc) va remplacer tout les PI par 3.14 remplacement textuelle
#define afficherbj printf("coucou\n");
int main (void)
{

    int var = 10;// 10 est une constante assignee a var
    const int variable_non_modifiable = 454;//on declare une constante elle est alors immuable
    printf("%d\n",variable_non_modifiable);
    int mavarenbinnaire = 0b1010;//on demande de stocker 1010 en binnaire soit 10
    //on peu aussi stocker une valeur hexadecimal avec le prefic 0x
    printf("%d\n",mavarenbinnaire);
    printf("%f\n",PI);
    afficherbj
    fprintf(stdout,"%d\n",var);//pareil que printf juste on precise ou envoyer
    //la sortie ici stdout le terminal car on y lance le programme
    //on a par exemple stderr pour sortie standart d erreur
    unsigned long valeur;
    printf("Entrez une valeur pour valeur :>");
    fscanf(stdin,"%lu",&valeur);//pour modifier variable a partir
    //d une fonction on lui fournit son adresse
    printf("Vous avez entrez %d pour valeur\n",valeur);

    


    int a = 0xF;
    printf("%d\n",a);
    printf("%x\n",a);







    return 0;
}
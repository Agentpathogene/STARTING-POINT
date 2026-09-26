#include <stdio.h>

enum Couleur
{
    rouge = 55,
    blanc,
    rose

};

struct Client
{
    int age:5;//on limite taille du int a 5bit cet syntaxe
    //utilisable que dans une struct permet d economiser de la memoire
    int argent:8;//on limite a 8 bits la taille total de la srtuct pass de 8  a 4 octet mtnant
};


//ON PEU CREE UN TYPE BOOL

enum BOOL
{
    false,
    true
};
struct BOOL
{

    unsigned char vaue:1;
};

typedef struct BOOL bool;//cree alias permettant de rendre code plus court

//AUTRE MOYEN DE REALISER L ALIAS

typedef struct
{
    unsigned char contentvar:5;
}nomdelalias;



int main (void)
{

    bool variable;//struct BOOL variable
    variable.value = false;


    nomdelalias loll;


    
    //CREATION DU CLIENT 1
    struct Client client1;
    client1.age = 21;
    client1.argent = 255;
    struct Client client2;
    client2 = client1; // on copie client 1 "dans client 2"
    printf("L'argent du client 1 est %d celui du client 2 est %d \n ",client1.argent,client2.argent);
    printf("taille en octet de la structure Client %lu\n",sizeof(struct Client));






    return 0;
}
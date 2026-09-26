#include<stdio.h>
//HA LE C C EST PASSIONNANT !
//J AI ENFIN TROUVE MA SPECIALISATION DANS LE CYBER OFFENSIF ...
enum fruits 
{
    const1,
    const2 = 2,
    banane,
    const4
};

struct MaStruct
{
    unsigned char age;
    int argent;
};



struct Acheteur
{
    int age;
    int panier_moyen;
    
};

struct vin
{
    unsigned int prix;
    enum fruits gout;
    struct Acheteur acheteur;


};

int main (void)
{
    printf("Valeur de const 4 %d\n",const4);
    struct MaStruct ma_var;
    struct MaStruct client2;
    ma_var.argent = 542;
    ma_var.age = 25;
    printf("argent : %d age : %d\n",ma_var.argent,ma_var.age);
    printf("Le champ argent de ma structure vaux : %d\n ",ma_var.argent);


    struct vin VIN1;
    VIN1.prix = 15;
    VIN1.gout = banane;
    VIN1.acheteur.age = 19;
    VIN1.acheteur.panier_moyen = 45;
    printf("Entrez l'age de l'acheteur de vin : >>");
    scanf("%d",&VIN1.acheteur.age);
    printf("L'age de l acheteur encodee est : %d\n",VIN1.acheteur.age);




    return 0;
}
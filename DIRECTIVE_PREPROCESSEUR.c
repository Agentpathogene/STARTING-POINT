#include <stdio.h>
/*directive de preprocesseur c est ce qui ce pass avant l execution du code
c est gcc contient le  preprocesseurs....*/
#warning "cette directive cree un msg de warning"
//on a aussi #error "msg" qui stop compilation
#define O //on definit N
#ifdef N//si N est definit on execute ce qui se passe dans le bloc



int main (void)
{  
    printf("coucou\n");






    return 0;
}

#else 


int main (void)
{  
    printf("lol est pas defini \n");






    return 0;
}



#endif
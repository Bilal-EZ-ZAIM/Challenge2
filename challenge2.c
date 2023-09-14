#include <stdio.h>
#include <string.h>

// Challenge 2 : Affichage Température
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ====================== Challenge 2 : Affichage Température =====================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();
    float t , c;
    printf("Ecrive la température en Fahrenhei ");
    scanf("%f", &t);
    c = (t -32) / 1.8;
    printf("la température : %.2f\n" , c);
    if(c < 0){
        printf("très froid\n");
    }else if (c < 10){
        printf("froid\n");
    }else if(c < 25){
        printf("froid\n");
    }else{
         printf("très froid");
    }

    return 0;
}
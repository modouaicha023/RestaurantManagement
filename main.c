#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

int main(){    
    plats plat_entree;
    plats plat_resistance;
    plats plat_dessert;
    client tab_clients;
    int choix;
    char choix2;
    
    printf("\t\t\t\t\t*************************************************************\n");
    printf("\t\t\t\t\t*                                            wwwww          *\n");
    printf("\t\t\t\t\t*       BIENVENUE AU RESTAURANT Kassip_Resto (^_^)          *\n");
    printf("\t\t\t\t\t*   Manger Devient un plaisir avec Un Goût de Légende       *\n");
    printf("\t\t\t\t\t*                           \\O/                             *\n");
    printf("\t\t\t\t\t*************************************************************\n\n");
    
    do{
    printf("\t\t\t+--------------------------------------------------------------------------------------+\n");
    printf("\t\t\t|                                 MENU PRINCIPAL                                       |\n");
    printf("\t\t\t+--------------------------------------------------------------------------------------+\n");
    printf("\t\t\t+--------------------------------------------------------------------------------------+\n");
    printf("\t\t\t|     OPTION       |                         ACTION(S)                                 |\n");
    printf("\t\t\t+--------------------------------------------------------------------------------------+\n");
    printf("\t\t\t|       1          |    SAISIE DE COMMANDES                                            |\n");
    printf("\t\t\t|       2          |    LISTE DE TOUT LES CLIENTS                                      |\n");
    printf("\t\t\t|       3          |    LISTES DES CLIENTS DONT LA COMMANDES EST SUPERIEUR A 20000 FCA |\n");
    printf("\t\t\t|       4          |    LISTES DES CLIENTS DONT LA COMMANDES EST INFERIEUR A 20000 FCA |\n");
    printf("\t\t\t+--------------------------------------------------------------------------------------+\n");

    printf("Faites votre choix : ");
    scanf("%d",&choix);
    
        switch(choix)
        {
            case 1:
                saisie_client(tab_clients);
                system("clear");
                break;
            case 2:
                liste_clients(tab_clients);
                break;
            case 3:
                liste_cmd_sup_20000(tab_clients);
                break;
            case 4:
                liste_cmd_inf_20000(tab_clients);
                break;
            default:
                printf("Cette option n'est pas disponible !!! \n");
                break;


        }
        
        printf("\n\t\t\t\t\t Voulez-vous Revenir au Menu Principal ? Tapez (y=OUI) OU n'importe quoi -->NON : ");
        scanf("%c",&choix2); 
    }while(getchar()=='y');
    printf("\n\n");
    printf("\t\t\t\t\t*************************************************************\n");
    printf("\t\t\t\t\t*                                wwwww                      *\n");
    printf("\t\t\t\t\t*        RESTAURANT Kassip_Resto (^_^)                      *\n");
    printf("\t\t\t\t\t*      MERCI D'ETRE PAASER DANS NOTRE RESTAURANT            *\n");
    printf("\t\t\t\t\t*     \\O/  AU REVOIR ET A LA PROCHAINE FOIS  \\O/            *\n");
    printf("\t\t\t\t\t*************************************************************\n\n"); 
    printf("\n\n");
    printf("\t\t\t @MODOU_AICHA_DIOP & @EL_HADJI_SAMBA_BA \n\n");

    
    return 0;
}


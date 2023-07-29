#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef struct
{
    char nom[100];
    long prix;
    int temps;
    
} plat;
typedef plat plats[200];

typedef struct
{
    char nom[100];
    char prenom[100];
    int commandes_entrees[100];
    int commandes_resistances[100];
    int commandes_desserts[100];
    long numero;
    double montant_facture;
    int qt_e;
    int qt_r;
    int qt_d;

    int temps_att;
    
} personne;
typedef personne client[200];

int n_client=0;
void plats_entrees(plats entrees)
{

    strcpy(entrees[0].nom,"Cake aux courgettes         ");
    entrees[0].prix=10500;
    entrees[0].temps=8;
    strcpy(entrees[1].nom,"Tartelettes à la mozzarella ");
    entrees[1].prix=9500;
    entrees[1].temps=8;
    strcpy(entrees[2].nom,"Taboulé                     ");
    entrees[2].prix=5500;
    entrees[2].temps=8;  
    strcpy(entrees[3].nom,"Brownies sans beurre        ");
    entrees[3].prix=9000;
    entrees[3].temps=8;  
    
    strcpy(entrees[4].nom,"Avocat farci aux crevettes  ");
    entrees[4].prix=2500;
    entrees[4].temps=8;  
    
    strcpy(entrees[5].nom,"Velouté de petits pois      ");
    entrees[5].prix=10900;
    entrees[5].temps=8;  
    
    strcpy(entrees[6].nom,"Salade d’avocat au saumon   ");
    entrees[6].prix=7000;
    entrees[6].temps=8; 
    
    strcpy(entrees[7].nom,"Meringue rapide             ");
    entrees[7].prix=3500;
    entrees[7].temps=8;  
    
    strcpy(entrees[8].nom,"Caviar d’aubergine facile   ");
    entrees[8].prix=16500;
    entrees[8].temps=8;  
    
    strcpy(entrees[9].nom,"Salade de pâtes aux tomates ");
    entrees[9].prix=8000;
    entrees[9].temps=8;  

}


void plats_resistance(plats resistances)
{
    strcpy(resistances[0].nom,"Steak tartare           ");
    resistances[0].prix=35000;
    resistances[0].temps=15;

    strcpy(resistances[1].nom,"Tarte aux pommes        ");
    resistances[1].prix=26000;
    resistances[1].temps=15;
    
    strcpy(resistances[2].nom,"Thiebou Guinar          ");
    resistances[2].prix=10500;
    resistances[2].temps=15;  
    
    strcpy(resistances[3].nom,"Paupiettes de Veau      ");
    resistances[3].prix=45000;
    resistances[3].temps=15;  

    strcpy(resistances[4].nom,"Thiebou Dieune          ");
    resistances[4].prix=5500;
    resistances[4].temps=15;  

    strcpy(resistances[5].nom,"Yassa Guinnar           ");
    resistances[5].prix=12500;
    resistances[5].temps=15;  

    strcpy(resistances[6].nom,"Les polpette italiennes ");
    resistances[6].prix=15000;
    resistances[6].temps=15; 

    strcpy(resistances[7].nom,"Taboulet libanais       ");
    resistances[7].prix=7000;
    resistances[7].temps=15;  

    strcpy(resistances[8].nom,"Spaghettis à la Carbonra");
    resistances[8].prix=16500;
    resistances[8].temps=15;

    strcpy(resistances[9].nom,"Crumble de ratatouille  ");
    resistances[9].prix=18000;
    resistances[9].temps=15;  

}

void plats_desserts(plats desserts)
{
    strcpy(desserts[0].nom,"Mousse au chocolat         ");
    desserts[0].prix=5000;
    desserts[0].temps=5;
    strcpy(desserts[1].nom,"Tarte aux pommes express   ");
    desserts[1].prix=4500;
    desserts[1].temps=5;
    strcpy(desserts[2].nom,"Gâteau moelleux au yaourt  ");
    desserts[2].prix=2500;
    desserts[2].temps=5;  
    strcpy(desserts[3].nom,"Fondant au chocolat        ");
    desserts[3].prix=3000;
    desserts[3].temps=5;  
    strcpy(desserts[4].nom,"Gâteau aux pommes de Mamie ");
    desserts[4].prix=5500;
    desserts[4].temps=5;  

    strcpy(desserts[5].nom,"Mugcake au chocolat express");
    desserts[5].prix=7500;
    desserts[5].temps=5;  
    strcpy(desserts[6].nom,"Crumble rapide aux pommes  ");
    desserts[6].prix=5000;
    desserts[6].temps=5; 
    strcpy(desserts[7].nom,"Cake àla poire & au amandes");
    desserts[7].prix=3000;
    desserts[7].temps=5;  
    strcpy(desserts[8].nom,"Bananes flambées au rhum   ");
    desserts[8].prix=4500;
    desserts[8].temps=5;  
     strcpy(desserts[9].nom,"Clafoutis aux cerises      ");
    desserts[9].prix=3000;
    desserts[9].temps=5;  
}

void menu(client clients,int j)
{
    int choix1;
    plats plat_entree;
    plats plat_resistance;
    plats plat_dessert;
    plats_entrees(plat_entree);
    plats_resistance(plat_resistance);
    plats_desserts(plat_dessert);

    clients[j].qt_e=0;
    clients[j].qt_r=0;
    clients[j].qt_d=0;
    printf("\t\t\t\t\t VOULEZ-VOUS COMMANDEZ QUELQUE CHOSE  ? Tapez O-->NON ou 1-->OUI ('_') ! : ");
    scanf("%d",&choix1);
    if (choix1==1)
    {
    
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                                 VOICI LES PLATS D'ENTREE DE NOTRE RESTAURANT                                                            |\n");
    printf("|                                                          VEUILLEZ FAIRE VOTRE CHOIX                                             KHASSIP_RESTO (^____^)  |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("| 1-   %s    | 2-  %s  |  3-    %s| 4-     %s     |\n",plat_entree[0].nom,plat_entree[1].nom,plat_entree[2].nom,plat_entree[3].nom);
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|      %ld Franc CFA                 |   %ld Franc CFA                  |          %ld Franc CFA            |    %ld Franc CFA                       |\n",plat_entree[0].prix,plat_entree[1].prix,plat_entree[2].prix,plat_entree[3].prix);
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n"); 
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("| 5-   %s    | 6-  %s  |  7-   %s |  8-     %s    |\n",plat_entree[4].nom,plat_entree[5].nom,plat_entree[6].nom,plat_entree[7].nom);
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|      %ld Franc CFA                  |   %ld Franc CFA                 |          %ld Franc CFA            |    %ld Franc CFA                       |\n",plat_entree[4].prix,plat_entree[5].prix,plat_entree[6].prix,plat_entree[7].prix);
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");  
    printf("+--------------------------------------+-----------------------------------+\n");
    printf("|                                      |                                   |\n");
    printf("| 9-   %s    | 10-  %s |\n",plat_entree[8].nom,plat_entree[9].nom);
    printf("|                                      |                                   |\n");
    printf("+--------------------------------------+-----------------------------------+\n");
    printf("|      %ld Franc CFA                 |   %ld Franc CFA                  |\n",plat_entree[8].prix,plat_entree[9].prix);
    printf("+--------------------------------------+-----------------------------------+\n"); 
    int i=0,choix2;
    clients[j].montant_facture=0;
    clients[j].temps_att=0;
    do
    {
        printf("VEUILLER SELECTIONNER VOTRE PLAT : ");
        scanf("%d",&clients[j].commandes_entrees[i]);
        clients[j].qt_e=clients[j].qt_e+1;
        clients[j].montant_facture=clients[j].montant_facture + plat_entree[clients[j].commandes_entrees[i]-1].prix;
        clients[j].temps_att=clients[j].temps_att+plat_entree[clients[j].commandes_entrees[i]-1].temps;
        printf("\nVoulez-vous Ajoutez un autre plat  ? Tapez 0--->NON ou 1--->OUI : ");
        scanf("%d",&choix2); 
        if (choix2==1){
            i++;
        }
        else 
            choix2=0;
        
    }while (choix2!=0);
    

    printf("\n\n");

    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                                VOICI LES PLATS DE RESISTANCE DE NOTRE RESTAURANT                                                        |\n");
    printf("|                                                          VEUILLEZ FAIRE VOTRE CHOIX                                             KHASSIP_RESTO (^____^)  |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("| 1-   %s        | 2-  %s      |  3-     %s   | 4-     %s         |\n",plat_resistance[0].nom,plat_resistance[1].nom,plat_resistance[2].nom,plat_resistance[3].nom);
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|      %ld Franc CFA                 |   %ld Franc CFA                 |          %ld Franc CFA           |    %ld Franc CFA                      |\n",plat_resistance[0].prix,plat_resistance[1].prix,plat_resistance[2].prix,plat_resistance[3].prix);
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n"); 
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("| 5-   %s        | 6-  %s      |  7-   %s     |  8-     %s        |\n",plat_resistance[4].nom,plat_resistance[5].nom,plat_resistance[6].nom,plat_resistance[7].nom);
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|      %ld Franc CFA                  |   %ld Franc CFA                 |          %ld Franc CFA           |    %ld Franc CFA                       |\n",plat_resistance[4].prix,plat_resistance[5].prix,plat_resistance[6].prix,plat_resistance[7].prix);
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");  
    printf("+--------------------------------------+-----------------------------------+\n");
    printf("|                                      |                                   |\n");
    printf("| 9-   %s        | 10-  %s     |\n",plat_resistance[8].nom,plat_resistance[9].nom);
    printf("|                                      |                                   |\n");
    printf("+--------------------------------------+-----------------------------------+\n");
    printf("|      %ld Franc CFA                 |   %ld Franc CFA                 |\n",plat_resistance[8].prix,plat_resistance[9].prix);
    printf("+--------------------------------------+-----------------------------------+\n"); 
    i=0;
    int choix3;
    do
    {
        printf("VEUILLER SELECTIONNER VOTRE PLAT : ");
        scanf("%d",&clients[j].commandes_resistances[i]);
        clients[j].qt_r=clients[j].qt_r+1;
        clients[j].montant_facture=clients[j].montant_facture + plat_resistance[clients[j].commandes_resistances[i]-1].prix;
        clients[j].temps_att=clients[j].temps_att+plat_resistance[clients[j].commandes_resistances[i]-1].temps;
        printf("\nVoulez-vous Ajoutez un autre plat  ? Tapez 0--->NON ou 1--->OUI : ");
        scanf("%d",&choix3); 
        if (choix3==1){
            i++;
        }
        else 
            choix3=0;
        
    }while (choix3!=0);

    printf("\n\n");

    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                                   VOICI LES DESSERTS DE NOTRE RESTAURANT                                                                |\n");
    printf("|                                                          VEUILLEZ FAIRE VOTRE CHOIX                                            KHASSIP_RESTO (^____^)   |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("| 1-%s        |2-  %s    |  3-   %s  | 4-     %s      |\n",plat_dessert[0].nom,plat_dessert[1].nom,plat_dessert[2].nom,plat_dessert[3].nom);
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|      %ld Franc CFA                  |   %ld Franc CFA                  |          %ld Franc CFA            |    %ld Franc CFA                       |\n",plat_dessert[0].prix,plat_dessert[1].prix,plat_dessert[2].prix,plat_dessert[3].prix);
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n"); 
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("| 5-   %s     | 6-  %s   |7- %s      | 8-     %s      |\n",plat_dessert[4].nom,plat_dessert[5].nom,plat_dessert[6].nom,plat_dessert[7].nom);
    printf("|                                      |                                   |                                    |                                         |\n");
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");
    printf("|      %ld Franc CFA                  |   %ld Franc CFA                  |          %ld Franc CFA            |    %ld Franc CFA                       |\n",plat_dessert[4].prix,plat_dessert[5].prix,plat_dessert[6].prix,plat_dessert[7].prix);
    printf("+--------------------------------------+-----------------------------------+------------------------------------+-----------------------------------------+\n");  
    printf("+--------------------------------------+-----------------------------------+\n");
    printf("|                                      |                                   |\n");
    printf("| 9-   %s     |   10- %s |\n",plat_dessert[8].nom,plat_dessert[9].nom);
    printf("|                                      |                                   |\n");
    printf("+--------------------------------------+-----------------------------------+\n");
    printf("|      %ld Franc CFA                  |   %ld Franc CFA                  |\n",plat_dessert[8].prix,plat_dessert[9].prix);
    printf("+--------------------------------------+-----------------------------------+\n"); 
    i=0;
    int choix4;
    do
    {
        printf("VEUILLER SELECTIONNER VOTRE PLAT : ");
        scanf("%d",&clients[j].commandes_desserts[i]);
        clients[j].qt_d=clients[j].qt_d+1;
        clients[j].montant_facture=clients[j].montant_facture + plat_dessert[clients[j].commandes_desserts[i]-1].prix;
        clients[j].temps_att=clients[j].temps_att+plat_dessert[clients[j].commandes_desserts[i]-1].temps;
        printf("\nVoulez-vous Ajoutez un autre plat  ? Tapez 0--->NON ou 1--->OUI : ");
        scanf("%d",&choix4); 
        if (choix4==1){
            i++;
        }
        else 
            choix4=0;
        
    }while (choix4!=0);
    
    printf("\n\n");
    }


    
}

void facture(client clients,int j){
    plats plat_entree;
    plats plat_resistance;
    plats plat_dessert;
    plats_entrees(plat_entree);
    plats_resistance(plat_resistance);
    plats_desserts(plat_dessert);
    
    time_t now;
    time(&now);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("                                           K H A S S I P  R E S T O                                                    \n");
    printf("                                             Dakar Almadies Zone 7                                                     \n");
    printf("                                                    Sénégal                                                            \n");
    printf("                                              TEL : 338004444                                                          \n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("           Facture N0000%d                                                      Date : %s\n",j+1,ctime(&now));
    printf("           PRENOM       :   %s\n",clients[j].prenom);
    printf("           NOM          :   %s\n",clients[j].nom);
    printf("           TELEPHONE    :   %ld\n",clients[j].numero);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("           TABLE                                              TIME              PU                  PT                \n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    int i=0;
    int id;
    
    do 
    {
    id=clients[j].commandes_entrees[i]-1;
    printf("        1  %s\t",plat_entree[id].nom);   
    printf("                       %d min\t",plat_entree[id].temps); 
    printf("     %ld FCA\t",plat_entree[id].prix);
    printf("     %ld FCA\n",plat_entree[id].prix);
    i++;
    }while(i<clients[j].qt_e);
    i=0;
    do 
    {
    id=clients[j].commandes_resistances[i]-1;
    printf("        1  %s\t",plat_resistance[id].nom);   
    printf("                       %d min\t",plat_resistance[id].temps); 
    printf("     %ld FCA\t",plat_resistance[id].prix);
    printf("     %ld FCA\n",plat_resistance[id].prix);   
    i++;
    }while(i<clients[j].qt_r);
    i=0;
    do 
    {
    id=clients[j].commandes_desserts[i]-1;
    printf("        1  %s\t",plat_dessert[id].nom);   
    printf("                       %d min\t",plat_dessert[id].temps); 
    printf("     %ld FCA\t",plat_dessert[id].prix);
    printf("     %ld FCA\n",plat_dessert[id].prix);
    i++;
    }while(i<clients[j].qt_r);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    if (clients[j].montant_facture > 20000)
    {
    printf("           REMISE :                                                                                   5%% \n");  
    printf("           TOTAL :                       ");
    printf("                       %d min\t",clients[j].temps_att); 
    printf("     %.2lf FCA\t",clients[j].montant_facture);
    printf("     %.2lf FCA\n",clients[j].montant_facture-(clients[j].montant_facture*0.05));
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
 
    }
    else
    {
    printf("           TOTAL :                       "); 
    printf("                       %d min\t",clients[j].temps_att); 
    printf("     %.2lf FCA\t",clients[j].montant_facture);
    printf("     %.2lf FCA\n",clients[j].montant_facture);    
    printf("-----------------------------------------------------------------------------------------------------------------------\n");

    }
    




}

void saisie_client(client clients)
{
    int i=0;
    int choix2;
    
    do
    {
        int idc=i;
        n_client=n_client+1;
        printf("\nVEUILLEZ RENSEIGNER LES INFORMATIONS SUIVANTES : \n");
        printf("----------------------------------------------\n");
        printf("PRENOM : ");
        scanf("%s",clients[i].prenom);
        printf("NOM : ");
        scanf("%s",clients[i].nom);
        printf("NUMERO DE TELEPHONE : ");
        scanf("%ld",&clients[i].numero);

        menu(clients,idc);
        facture(clients,idc);
        printf("\n\t\t\t\t\t Voulez-vous Ajoutez un autre client  ? Tapez 0--->NON ou 1--->OUI : ");
        scanf("%d",&choix2); 
        if (choix2==1){
            i++;
        }
        else 
            choix2=0;
        
    }while (choix2!=0);
    
    
    printf("\n");
}
void liste_clients(client clients)
{
    int i;

    for ( i = 0; i <n_client ; i++)
    {   
        printf("PRENOM : %s \n",clients[i].prenom);
        printf("NOM: %s \n",clients[i].nom);
        printf("TELEPHONE : %ld      \n",clients[i].numero);
        printf("-------------------------------\n"); 
    }
    printf("\n");
    
    
}


void liste_cmd_sup_20000(client clients)
{
    plats plat_entree;
    plats plat_resistance;
    plats plat_dessert;
    plats_entrees(plat_entree);
    plats_resistance(plat_resistance);
    plats_desserts(plat_dessert);
    
    time_t now;
    time(&now);
    for(int j=0;j<n_client;j++){
        if (clients[j].montant_facture > 20000){
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("                                           K H A S S I P  R E S T O                                                    \n");
    printf("                                             Dakar Almadies Zone 7                                                     \n");
    printf("                                                    Sénégal                                                            \n");
    printf("                                              TEL : 338004444                                                          \n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("           Facture N0000%d                                                      Date : %s\n",j+1,ctime(&now));
    printf("           PRENOM       :   %s\n",clients[j].prenom);
    printf("           NOM          :   %s\n",clients[j].nom);
    printf("           TELEPHONE    :   %ld\n",clients[j].numero);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("           TABLE                                              TIME              PU                  PT                \n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    int i=0;
    int id;
    
    do 
    {
    id=clients[j].commandes_entrees[i]-1;
    printf("        1  %s\t",plat_entree[id].nom);   
    printf("                       %d min\t",plat_entree[id].temps); 
    printf("     %ld FCA\t",plat_entree[id].prix);
    printf("     %ld FCA\n",plat_entree[id].prix);
    i++;
    }while(i<clients[j].qt_e);
    i=0;
    do 
    {
    id=clients[j].commandes_resistances[i]-1;
    printf("        1  %s\t",plat_resistance[id].nom);   
    printf("                       %d min\t",plat_resistance[id].temps); 
    printf("     %ld FCA\t",plat_resistance[id].prix);
    printf("     %ld FCA\n",plat_resistance[id].prix);   
    i++;
    }while(i<clients[j].qt_r);
    i=0;
    do 
    {
    id=clients[j].commandes_desserts[i]-1;
    printf("        1  %s\t",plat_dessert[id].nom);   
    printf("                       %d min\t",plat_dessert[id].temps); 
    printf("     %ld FCA\t",plat_dessert[id].prix);
    printf("     %ld FCA\n",plat_dessert[id].prix);
    i++;
    }while(i<clients[j].qt_r);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    
    printf("           REMISE :                                                                                   5%% \n");  
    printf("           TOTAL :                       ");
    printf("                       %d min\t",clients[j].temps_att); 
    printf("     %.2lf FCA\t",clients[j].montant_facture);
    printf("     %.2lf FCA\n",clients[j].montant_facture-(clients[j].montant_facture*0.05));
    printf("-----------------------------------------------------------------------------------------------------------------------\n");

        }
    
    }




}

void liste_cmd_inf_20000(client clients)
{
    plats plat_entree;
    plats plat_resistance;
    plats plat_dessert;
    plats_entrees(plat_entree);
    plats_resistance(plat_resistance);
    plats_desserts(plat_dessert);
    
    time_t now;
    time(&now);
    for(int j=0;j<n_client;j++){
        if (clients[j].montant_facture <= 20000){
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("                                           K H A S S I P  R E S T O                                                    \n");
    printf("                                             Dakar Almadies Zone 7                                                     \n");
    printf("                                                    Sénégal                                                            \n");
    printf("                                              TEL : 338004444                                                          \n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("           Facture N0000%d                                                      Date : %s\n",j+1,ctime(&now));
    printf("           PRENOM       :   %s\n",clients[j].prenom);
    printf("           NOM          :   %s\n",clients[j].nom);
    printf("           TELEPHONE    :   %ld\n",clients[j].numero);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("           TABLE                                              TIME              PU                  PT                \n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    int i=0;
    int id;
    
    do 
    {
    id=clients[j].commandes_entrees[i]-1;
    printf("        1  %s\t",plat_entree[id].nom);   
    printf("                       %d min\t",plat_entree[id].temps); 
    printf("     %ld FCA\t",plat_entree[id].prix);
    printf("     %ld FCA\n",plat_entree[id].prix);
    i++;
    }while(i<clients[j].qt_e);
    i=0;
    do 
    {
    id=clients[j].commandes_resistances[i]-1;
    printf("        1  %s\t",plat_resistance[id].nom);   
    printf("                       %d min\t",plat_resistance[id].temps); 
    printf("     %ld FCA\t",plat_resistance[id].prix);
    printf("     %ld FCA\n",plat_resistance[id].prix);   
    i++;
    }while(i<clients[j].qt_r);
    i=0;
    do 
    {
    id=clients[j].commandes_desserts[i]-1;
    printf("        1  %s\t",plat_dessert[id].nom);   
    printf("                       %d min\t",plat_dessert[id].temps); 
    printf("     %ld FCA\t",plat_dessert[id].prix);
    printf("     %ld FCA\n",plat_dessert[id].prix);
    i++;
    }while(i<clients[j].qt_r);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    
    printf("           TOTAL :                       ");
    printf("                       %d min\t",clients[j].temps_att); 
    printf("     %.2lf FCA\t",clients[j].montant_facture);
    printf("     %.2lf FCA\n",clients[j].montant_facture);
    printf("-----------------------------------------------------------------------------------------------------------------------\n");

        }
    
    }




}
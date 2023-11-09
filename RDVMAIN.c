
#include<stdio.h>
#include <string.h>
#include "header.h"
int ajouter(rdv , char *);
int modifier(int id,rdv nouv, char *filename);
int supprimer(int id,char *filename);
int chercher(int id ,char *filename);
int main()
{

rdv r1={123456,11,400,{02,11,2024},{8,30},3,"exp"} ,r2={123478,22,500,{20,8,2024},{9,30},3,"exp1"};

int x=ajouter(r1,"rv.txt");
    if(x==1)
        printf("\najout rdv");
    else printf("\nechec rdv");
        
    x=modifier(33,r2,"rv.txt" );

    if(x==1)
        printf("\nModification de rdv avec succés");
    else printf("\nechec Modification");
    x=supprimer(33,"rv.txt" );
    if(x==1)
        printf("\nSuppression de rdv avec succés");
    else printf("\nechec Suppression");
int r= chercher(11,"rv.txt");
if(r==0)
printf("\nnot found");
return 0;
}

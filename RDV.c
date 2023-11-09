
#include "string.h"
#include<stdio.h>
#include "header.h"
int ajouter(rdv r , char * filename )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %d %d %d %d %d %d %s \n",r.cin,r.id,r.idetab,r.date_rv.jour,r.date_rv.mois,r.date_rv.annee,r.heure_rv.heure,r.heure_rv.minute,r.cap,r.cren);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier(int id,rdv nouv, char *filename)
{
rdv r;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %d %d %d %d %d %d %s",&r.cin,&r.id,&r.idetab,&r.date_rv.jour,&r.date_rv.mois,&r.date_rv.annee,&r.heure_rv.heure,&r.heure_rv.minute,&r.cap,r.cren)!=EOF)
{
if(r.id!=id)
        fprintf(f2,"%d %d %d %d %d %d %d %d %d %s \n",r.cin,r.id,r.idetab,r.date_rv.jour,r.date_rv.mois,r.date_rv.annee,r.heure_rv.heure,r.heure_rv.minute,r.cap,r.cren);
else

  fprintf(f2,"%d %d %d %d %d %d %d %d %d %s \n",r.cin,r.id,r.idetab,r.date_rv.jour,r.date_rv.mois,r.date_rv.annee,r.heure_rv.heure,r.heure_rv.minute,r.cap,r.cren);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}
int supprimer(int id, char * filename)
{
rdv r;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %d %d %d %d %d %d %s",&r.cin,&r.id,&r.idetab,&r.date_rv.jour,&r.date_rv.mois,&r.date_rv.annee,&r.heure_rv.heure,&r.heure_rv.minute,&r.cap,r.cren)!=EOF)
{
if(r.id!=id)
        fprintf(f2,"%d %d %d %d %d %d %d %d %d %s \n",r.cin,r.id,r.idetab,r.date_rv.jour,r.date_rv.mois,r.date_rv.annee,r.heure_rv.heure,r.heure_rv.minute,r.cap,r.cren);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}
int chercher(int id, char * filename)
{
rdv r; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %d %d %d %d %d %d %d %d %s",&r.cin,&r.id,&r.idetab,&r.date_rv.jour,&r.date_rv.mois,&r.date_rv.annee,&r.heure_rv.heure,&r.heure_rv.minute,&r.cap,r.cren)!=EOF && tr==0)
{if(id==r.id)
tr=1;}
} fclose(f);
return tr;

}

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
typedef struct{
	int jour ;
	int mois ;
	int annee;
}date;
typedef struct {
	int heure ;
	int minute ;
}heure;
typedef struct {
	int cin ;
	int id ;
	int idetab ;
	date date_rv ;
	heure heure_rv;
	int cap ;
	char cren[20];
	
}rdv;
int ajouter(rdv , char *);
int modifier(int id,rdv nouv, char *filename);
int supprimer(int id,char *filename);
int chercher(int id ,char *filename);
#endif//HEADER_H_INCLUDED


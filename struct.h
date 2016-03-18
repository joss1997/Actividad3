#include<stdio.h>  
#include <string.h> 
#include <stdlib.h>

typedef struct alien_t{

	char nombre[30];
	int id;
	char especie;
	struct planeta_t * planetas;
	struct idiomas_t * idiomas;
	struct alien_t * siguiente;
	
	} alien;
	
	
typedef struct planeta_t{

	char nombre[30];
	int starwars_code;
	char agua;
	char oxigeno;
	struct planeta_t * siguiente;
	
	} planeta;
	
typedef struct idiomas_t{

	char nombre[30];
	char tipo;
	int simbolos;
	struct idiomas_t * siguiente;
	struct planeta_t * planetas;

	} idiomas;

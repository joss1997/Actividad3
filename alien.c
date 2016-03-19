#include "struct.h"

alien * crear (){
	
	alien * lista;
	lista = malloc(sizeof(alien));
	if (lista == NULL)
		printf("No hay memoria");  
	else{

		char tmpNom [30];
		printf("Ingrese nombre del alien: "); 
		scanf("%s",&tmpNom[0]);
		while(getchar()!='\n');
		//fflush(stdin);
		strcpy(lista->nombre, tmpNom);
		int idA;
		printf("Ingrese id del alien: "); 
		scanf("%d",&idA);
		//fflush(stdin);
		while(getchar()!='\n');
		lista->id = idA;
		char espec;
		printf("Ingrese letra de especie del alien: "); 
		scanf("%c",&espec);
		while(getchar()!='\n');
		//fflush(stdin);
		lista->especie = espec;
	
		planeta * p;
		p = malloc(sizeof(planeta));
		if(p == NULL)
			printf("No hay memoria para planeta"); 
		else{
			lista->planetas = p;
			char tmpNomP [30];
			printf("Ingrese nombre del planeta: "); 
			scanf("%s",&tmpNomP[0]);
			while(getchar()!='\n');
			//fflush(stdin);
			strcpy(lista->planetas->nombre , tmpNomP);
			int starwars;
			
			printf("Ingrese starwars code del planeta: "); 
			scanf("%d", &starwars);
			while(getchar()!='\n');
			//fflush(stdin);
			lista->planetas->starwars_code = starwars;
			char tmpAgua;
			printf("Ingrese 's' si hay agua o 'n' si no la hay: ");
			scanf("%c", &tmpAgua);
			while(getchar()!='\n');
			//fflush(stdin);
			lista->planetas->agua = tmpAgua;
			char tmpOxigeno;
			printf("Ingrese 's' si hay oxigeno o 'n' si no la hay: ");
			scanf("%c", &tmpOxigeno);
			while(getchar()!='\n');
			//fflush(stdin);
			lista->planetas->oxigeno = tmpOxigeno;	
			lista->planetas->siguiente = NULL;
	
			idiomas * i;
			i = malloc(sizeof(idiomas));
			if ( i == NULL)
				printf("No hay memoria para idioma"); 
			else{
				lista->idiomas = i;
				char tmpNomI [30];
				printf("Ingrese nombre del idioma: "); 
				scanf("%s",&tmpNomI[0]);
				while(getchar()!='\n');
				//fflush(stdin);
				strcpy(lista->idiomas->nombre , tmpNomI);
				char tip;
				printf("Ingrese letra del tipo del idioma: ");
				scanf("%c", &tip);
				while(getchar()!='\n');
				//fflush(stdin);
				lista->idiomas->tipo = tip;
				int sim;
				printf("Ingrese cantidad de simbolos del idioma: "); 
				scanf("%d", &sim);
				while(getchar()!='\n');
				//fflush(stdin);
				lista->idiomas->simbolos = sim;
				lista->idiomas->siguiente = NULL;
				lista->idiomas->planetas = p;

				}
	


			}
		}
	return lista;
	}	


void imprimir(alien * l){

	printf("--------Alien---------");
	printf("\nNombre: %s",l->nombre);
	printf("\nID: %d",l->id);
	printf("\nEspecie: %c",l->especie);
	printf("\n-------Planeta--------");
	printf("\nNombre: %s",l->planetas->nombre);
	printf("\nCodigo: %d",l->planetas->starwars_code);
	printf("\nAgua: %c",l->planetas->agua);
	printf("\nOxigeno: %c",l->planetas->oxigeno);
	printf("\n--------Idioma--------");
	printf("\nNombre: %s",l->idiomas->nombre);
	printf("\nTipo: %c",l->idiomas->tipo);
	printf("\nSimbolos: %d",l->idiomas->simbolos);

	

}


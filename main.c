#include "alien.c"

int main(){
	
	alien * lista_aliens;
	lista_aliens = malloc(sizeof(alien));
	strcpy(lista_aliens->nombre, "Alpha");
	lista_aliens->id = 1234;
	lista_aliens->especie = 'e';
	
	planeta * p;
	p = malloc(sizeof(planeta));
	
	lista_aliens->planetas = p;
	strcpy(lista_aliens->planetas->nombre , "ALPATH");
	lista_aliens->planetas->starwars_code = 23;
	lista_aliens->planetas->agua = 'n';
	lista_aliens->planetas->oxigeno = 's';
	lista_aliens->planetas->siguiente = NULL;
	
	idiomas * i;
	i = malloc(sizeof(idiomas));
	lista_aliens->idiomas = i;
	strcpy(lista_aliens->idiomas->nombre , "AL");
	lista_aliens->idiomas->tipo = 'a';
	lista_aliens->idiomas->simbolos = 67;
	lista_aliens->idiomas->siguiente = NULL;
	lista_aliens->idiomas->planetas = p;
	printf("Alien:\n ");  
	printf("Nombre:\n ");  
	    
	printf("%s\n",lista_aliens->nombre);
	printf("Id:\n "); 
	printf("%d\n",lista_aliens->id);
	printf("Especie:\n "); 
	printf("%c\n",lista_aliens->especie);
	printf("Planetas:\n "); 
	printf("Nombre:\n "); 
	
	printf("%s\n",lista_aliens->planetas->nombre);
	printf("Starwars_code:\n "); 
	printf("%d\n",lista_aliens->planetas->starwars_code);
	printf("Agua:\n "); 
	printf("%c\n",lista_aliens->planetas->agua);
	printf("Oxigeno:\n "); 
	printf("%c\n",lista_aliens->planetas->oxigeno);
	printf("Idiomas:\n "); 
	printf("Nombre:\n "); 
	printf("%s\n",lista_aliens->idiomas->nombre);
	printf("Tipo:\n "); 
	printf("%c\n",lista_aliens->idiomas->tipo);
	printf("Simbolos:\n "); 
	printf("%d\n",lista_aliens->idiomas->simbolos);

	alien * l;
	l = crear();
	//prueba aqui va el imprimir
	imprimir(l);
	
	
	
	
	
	
	
	
	
	
}


#include <stdio.h>
#include <string.h>

int checarEmpate(char txt[], char pat[]){
	int i,j, c=0;//c es la coincidencia
	char aux[strlen(pat)];
	int t=strlen(txt);//Numero de caracteres de ambas cadenas
	int p=strlen(pat);
	for (i = 0; i < t-p+ 1; i++){	//Recorremos primero el txt
		int k= i;
		int z= 0;
		for (j = 0; j < p; j++){//Recorremos el patron buscando coincidencia
			if(pat[j] == txt[j+k]){
				z++;
			}
		}
		if (z == p){
			c++;//Contador de las veces que se encotr� la coincidencia
			i= i + p -1;
		}
	}
	return c;
}

int main(int argc, char *argv[]) {
	char txt[80],  pat[80];
	printf("Introduce el texto: \n");
	scanf("%s",txt); 
	printf("Introduce el patron a buscar: \n");
	scanf("%s",&pat);
	printf("Numero de veces que se encontro el patron: ");
	printf("%d",checarEmpate(txt,pat));
	
}



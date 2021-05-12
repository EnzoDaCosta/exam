#include<stdio.h>
#include<stdlib.h>


int compte_car(char *cmpt, char *chaine){
	int i = 0;
	
	while(*chaine){
		if(*cmpt == *chaine){
			i++;
		}
		chaine++;
	}
	return i;
}


int main(){
	char cmpt[1];
	char chaine[50];
	char *p;
	
	printf("quel caractere cherche tu ? ");
	scanf("%s",cmpt);
	printf("entre le mot : ");
	scanf("%s",chaine);
	
	if(compte_car(cmpt,chaine)>0){
		printf("il y a %d caracteres identique", compte_car(cmpt,chaine));
	}
	else{
		printf("in n'y a pas de caractere identique");
	}
	
	
}

#include<stdio.h>
#include<stdlib.h>


float celsius2farenhit(float c){
	float f;
	f = (9/5)*c+32;
	return f;
}	
float farenhit2celsius(float f){
	float c;
	c = (f-32)*5/9;
	return c;
}	

int main(){
	int saisie;
	float nbDeg;

	printf("Covertion de °F a °C (1) ou de °C a °F (2) : ");
	scanf("%d", &saisie);
	
	printf("entrer la valeur: ");
	scanf("%f",&nbDeg);

	if (saisie == 1){
	printf("la valeur donner fait %.2f °C.\n", celsius2farenhit(nbDeg));
	}
	
	else if(saisie == 2){
	printf("la valeur donner fait %.2f °F.\n", farenhit2celsius(nbDeg));
	}
}

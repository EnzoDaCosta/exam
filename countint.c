#include<stdio.h>
#include<stdlib.h>


int compte_int(int *tableau, int taille,int valeur){
	int compteur = 0, t = 0;
	
	while(t < taille){
		if(valeur == tableau[1]){
			compteur++;
		}
		t++;
	}
	return compteur;
}


int main(){
	int T1[5]={2,42,1,42,9};
	int T2[10]={1,2,3,4,5,6,7,8,9,10};
	
	printf("%d dans T1 : %d fois.\n",42, compte_int(T1,5,42));
	printf("%d dans T1 : %d fois.\n",2, compte_int(T1,5,2));
	printf("%d dans T2 : %d fois.\n",10, compte_int(T2,10,10));
	printf("%d dans T2 : %d fois.\n",42, compte_int(T2,10,42));
	
}

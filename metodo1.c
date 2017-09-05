#include <stdio.h>

int main(){
	
	int i,j,k,n = 4;
	float M[n][n+1],c,soma = 0.0,V[n];

//Entrando com os valores na matriz

	for(i=1;i<=n;i++){
		printf("Elementos da %da. linha:\n",(i));
		for(j=1;j<=n+1;j++){

			printf("M[%d][%d] = ",i,j);
			scanf("%f", &M[i][j]);
			}

			printf("\n");
			}
//Imprimindo a Matriz

	printf("\nMatriz\n");
		for(i=1;i<=n;i++){
			for(j=1;j<=n+1;j++){
				printf("%.1f ", M[i][j]);
			        }
			printf("\n");
			}

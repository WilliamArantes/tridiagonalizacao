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
//Escalonando a Matriz

		for(j=1;j<=n;j++){
			for(i=1;i<=n;i++){
				if(i>j){
					c = -(M[i][j]/M[j][j]);
			for(k=1;k<=n+1;k++){
					M[i][k] = (c*M[j][k])+M[i][k];
			}
				}
			}
		}
//Mostrando a Matriz Escalonada

	printf("\nMatriz Escalonada\n");
		for(i=1;i<=n;i++){
			for(k=1;k<=n+1;k++){
				printf("%.1f ", M[i][k]);
			}
		printf("\n");
		}
//Fazendo a Substituição Reversa

	V[n] = M[n][n+1]/M[n][n];

	for(i=n-1;i>=1;i--){
		soma = 0;

		for(j=i+1;j<=n;j++){

			soma = soma+M[i][j]*V[j];
		}

			V[i] = (M[i][n+1]-soma)/M[i][i];
	}


#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);

	//Reservar memoria para la matriz tridimencional

	double*** matriz3D = (double***)malloc(n * sizeof(double**));
	for(int i=0; i<n; i++) {
		matriz3D[i] = (double**)malloc(m * sizeof(double*));
		for(int j=0; j<m; j++) {
			matriz3D[i][j] = (double*)malloc(k * sizeof(double));
		}
	}

	//Liberar memoria para la matriz tridimencional

	for (int a=0; a<n; a++) {
		for (int b=0; b<m; b++) {
			free(matriz3D[a][b]);
		}
		free(matriz3D[a]);
	}

	free(matriz3D);

	return 0;
}

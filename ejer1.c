#include <stdio.h>
#include <stdlib.h>

int* crearVector(int n) {
	int* vec = (int*)malloc(n * sizeof(int));
	return vec;
}

int* vecPositivos(int n, int* c, int* vec) {
	int* vecpos = (int*)malloc(n * sizeof(int));
	for(int i=0; i<n; i++){
		if (vec[i] > 0) {
			vecpos[*c] = vec[i];
			(*c)++;
		}
	}
	return vecpos;
}

void imprimirVec(int size, int* vec) {
	for(int i=0; i<size; i++) {
		printf(" %d ", vec[i]);
	}
	printf("\n");
}

int main() {
	int n, count = 0;
	scanf("%d", &n);
	int* vector = crearVector(n);

	for(int i=0; i<n; i++) {
		printf("Elemento %d -> ", i + 1); scanf("%d", &vector[i]);
	}

	imprimirVec(n, vector);
	int* vecpositivos = vecPositivos(n, &count, vector);
	imprimirVec(count, vecpositivos);

	free(vector);
	free(vecpositivos);
	return 0;
}

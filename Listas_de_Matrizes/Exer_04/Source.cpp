#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ImpMatriz(int matriz1[4][4]) {
	for (int i = 0; i < 4; i++) {
		printf("----------------------------------\n|");
		for (int j = 0; j < 4;j++) {
			printf(" %d |", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("----------------------------------\n\n");
}

int main() {
	srand(time(NULL));
	int matriz[4][4], aux = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4;j++) {
			matriz[i][j] = 100 - rand() % 200;
			if (matriz[i][j] > 10) {
				aux++;
			}
		}
	}
	ImpMatriz(matriz);
	printf("A matriz possui %d numeros maiores que 10.\n",aux);
	system("pause");
	return 0;

}
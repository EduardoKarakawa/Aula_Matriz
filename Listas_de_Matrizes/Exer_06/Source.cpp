#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ImpMatriz(int matriz1[3][3]) {
	for (int i = 0; i < 3; i++) {
		printf("----------------------------------\n|");
		for (int j = 0; j < 3;j++) {
			printf(" %d |", matriz1[i][j]);
		}
		printf("\n");
	}
	printf("----------------------------------\n\n");
}

int main() {
	srand(time(NULL));
	int matriz[3][3], aux = 2, soma= 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			matriz[i][j] = 100 - rand() % 200;
			if (aux == j) {
				soma += matriz[i][j];
				aux--;
			}
		}
	}

	ImpMatriz(matriz);
	printf("A soma dos valores da diagonal secundaria eh %d\n\n", soma);
	system("pause");
	return 0;

}
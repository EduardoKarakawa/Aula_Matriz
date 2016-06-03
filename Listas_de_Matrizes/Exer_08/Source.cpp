#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void ImpMatriz(int matriz1[10][10]) {
	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10;j++) {
			printf(" %d |", matriz1[i][j]);
		}
		printf("\n");
	}

}

int main() {
	srand(time(NULL));
	int matriz[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10;j++) {
			if (i < j) {
				matriz[i][j] = 2 * i + 7 * j - 2;
			}
			else if (i > j) {
				matriz[i][j] = 4*pow(i,3) + 5*pow(j,2) + 1;
			}
			else {
				matriz[i][j] = 3 * pow(i,2) - 1;
			}
		}
	}

	ImpMatriz(matriz);
	system("pause");
	return 0;

}
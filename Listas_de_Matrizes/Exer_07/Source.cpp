#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	srand(time(NULL));
	int matriz[3][3], aux = 2, soma = 0;

	for (int i = 0; i < 3; i++) {
		printf("-----------------\n");
		for (int j = 0; j < 3;j++) {
			
			matriz[i][j] = 100 - rand() % 200;
			if (aux == j) {
				printf(" %d |", matriz[i][j]);
				aux--;
			}
			else {
				printf("     |");
			}
		}
		printf("\n");
	}
	printf("-----------------\n");

	system("pause");
	return 0;

}
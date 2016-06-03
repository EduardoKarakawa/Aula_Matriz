#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[5][5];

	for (int i = 0; i < 5; i++) {
		printf("---------------------\n|");
		for (int j = 0; j < 5;j++) {
			if (i == j) {
				matriz[i][j] = 1;
			}
			else {
				matriz[i][j] = 0;
			}
			printf(" %d |", matriz[i][j]);
		}
		printf("\n");
	}
	printf("---------------------\n\n");
	system("pause");
	return 0;

}
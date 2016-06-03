#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[3][3], menor = NULL;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			scanf_s("%d", &matriz[i][j]);
			if ((matriz[i][j] < menor) || (menor == NULL)) {
				menor = matriz[i][j];
			}
		}
	}

	printf("O menor numero eh %d", menor);
	system("pause");
	return 0;

}
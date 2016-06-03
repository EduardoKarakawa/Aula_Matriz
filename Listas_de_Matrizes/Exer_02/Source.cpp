#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[3][3], maior = NULL, x, y;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			scanf_s("%d", &matriz[i][j]);
			if ((matriz[i][j] > maior) || (maior == NULL)) {
				maior = matriz[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("O maior numero eh %d e esta em [%d][%d].", maior, x,y);
	system("pause");
	return 0;

}
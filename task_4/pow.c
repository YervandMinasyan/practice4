#include <stdio.h>

int main() {
	int a = 2;
	printf("a = 2\n");
	int b = 3;
	printf("b = 3\n");
	int res = 1;
	for(int i = 0; i < b; i++){
		res *= a;
	}
	printf("tveri astichany`\n");
	printf("%d", res);
	printf("\n");
	return 0;
}


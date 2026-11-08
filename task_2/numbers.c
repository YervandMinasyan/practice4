#include <stdio.h>



int main() {
	int n;
	printf("mutqagrir tiv\n");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		printf("%d", i);
	}
	printf("\n");
             int a = 0;
		while(a <= n) {
			if(a % 2 == 0){	
			printf("%d ", a);
			}
		a++;
		}
		printf("\n");
		int count = 0;
		int sum = 0;
		for(int j = 1; j <= n; j++){
			sum += j;
		count++;
		}
		printf("tveri qanaky\n");
		printf("%d\n", count);
		printf("tveri gumary\n");
		printf("%d\n", sum);

	printf("\n");

return 0;
}

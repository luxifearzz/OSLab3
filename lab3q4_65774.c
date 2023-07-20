#include <stdio.h>
int main() {
	int sum = 0;
	int cnt = 0;
	int num;
	printf("enter number: ");
	scanf("%d", &num);
	while (num > 0) {
		sum += num;
		cnt++;
		printf("enter number: ");
		scanf("%d", &num);
	}
	printf("summation: %d, average: %f\n", sum, (1.0*sum)/cnt);
	return 0;
}

#include<stdio.h>

int main() {
	int list[2],result[2];
	int a, b, c;

	scanf("%d %d", &list[0],&list[1]); //234

	for (int i = 0; i < sizeof(list) / sizeof(int); i++) {
		a = list[i] / 100; //2
		b = (list[i] % 100)/10; //3
		c = list[i] % 10; //4

		result[i] = (c * 100) + (b * 10) + a;
	}

	if (result[0] < result[1])
		printf("%d", result[1]);
	else
		printf("%d", result[0]);
}
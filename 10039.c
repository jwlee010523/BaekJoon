#include<stdio.h>

int main() {
	int score[5] = { 0, };
	int sum = 0;
	int avg = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (score[i] < 40) {
			score[i] = 40;
		}
		sum += score[i];
		avg = sum / 5;
	}
	printf("%d", avg);
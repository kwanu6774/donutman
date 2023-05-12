#include <stdio.h>
#pragma warning (disable:4996)

main() {
	int N;         //0~99사이의 정수
	int cycle;     // 새로운 수가 주어진 수가 되는 싸이클 길이
	scanf("%d", &N);

	for (/* i = 0;  N == a  새로운수가 주어진수가 될 때 까지;      */) {
		int a1 = N % 10;  //N의 1의자리
		int a10 = N / 10; //N의 10의자리
		int a = a1 + a10; //새로운 수

		if (a == N) {
			cycle = i;
			break;
		}
	}
	printf("%d", cycle);
	




}
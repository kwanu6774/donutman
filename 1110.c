#include <stdio.h>
#pragma warning (disable:4996)

main() {
	int N;         //0~99������ ����
	int cycle;     // ���ο� ���� �־��� ���� �Ǵ� ����Ŭ ����
	scanf("%d", &N);

	for (/* i = 0;  N == a  ���ο���� �־������� �� �� ����;      */) {
		int a1 = N % 10;  //N�� 1���ڸ�
		int a10 = N / 10; //N�� 10���ڸ�
		int a = a1 + a10; //���ο� ��

		if (a == N) {
			cycle = i;
			break;
		}
	}
	printf("%d", cycle);
	




}
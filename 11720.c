#include <stdio.h>
#pragma warning (disable:4996)

main() {                                 //������ ��
	int N;
	char num[100];
	int sum = 0;
	scanf("%d", &N);
	scanf("%s", num);
	for (int i = 0; i < N; i++)
		sum += num[i]-'0';             //���ڿ� ���� ������ ������ �ٲ�
		printf("%d", sum);

	

}
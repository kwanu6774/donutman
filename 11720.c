#include <stdio.h>
#pragma warning (disable:4996)

main() {                                 //숫자의 합
	int N;
	char num[100];
	int sum = 0;
	scanf("%d", &N);
	scanf("%s", num);
	for (int i = 0; i < N; i++)
		sum += num[i]-'0';             //문자열 값을 정수형 값으로 바꿈
		printf("%d", sum);

	

}
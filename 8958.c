#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

main() {
	int n;
	char a[79];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)  
	{
		int num = 0, x = 1;
		scanf("%s", a);

		for (i = 0; i<strlen(a); i++)
			if (a[i] == 'O') {
				num += x;
				x++;
			}
			else
				x = 1;
		printf("%d", num);

		
	}


	
}
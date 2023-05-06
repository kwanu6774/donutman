#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	char word[1000000];
	int n=0;
	int i;
	scanf("%[^\n]s", word);
	for (i = 0; word[i] != '\0'; i++)
		if (word[i] == ' ')
			n++;
	if (word[0] == ' ')
			n--;
	if (word[i - 1] == ' ')
			n--;
	printf("%d", n+1);           
}
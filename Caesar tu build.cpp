#include <stdio.h>

int main () {
	char phanturo[100], ch;
	int k, i;
	printf("Nhap phan tu ro:\n");
	gets(phanturo);
	printf("Nhap khoa k:\n");
	scanf("%c", k);
	for (i = 0; phanturo[i] != '/0', i++)
	{
	if (ch = 'a' && ch = 'z') {
		ch = ch + k;
		if (ch > 'z') {
			ch = ch - 'z' + 'a' - 1;
		}
	}else if (ch = 'A' && ch = 'Z') {
		ch = ch + k;
		if (ch > 'Z') {
			ch = ch - 'Z' + 'A' - 1;
		}
	printf("Phan tu ma la:", ch);
}

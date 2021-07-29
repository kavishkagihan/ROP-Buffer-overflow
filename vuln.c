#include<stdio.h>
#include<string.h>


int main()
{
	char buffer[100];
	printf("Try to pwn me !\n");
	gets(buffer);
	puts(buffer);
	return 0;
}


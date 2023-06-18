#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (CH <= 'Z')
	{
		putchr(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}

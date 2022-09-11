#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Descriptions : printd alphabet in lowercase then uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; <=  'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}

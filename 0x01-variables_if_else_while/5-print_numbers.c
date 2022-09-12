#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints allsingle digit numbers of
 * base 10 from 0
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num  < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
return (0);
}

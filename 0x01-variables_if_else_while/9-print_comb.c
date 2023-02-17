#include <stdio.h>
/**
 * main - entry point of the application
 * Return: returns 0 for success
 */
int main(void)
{
int num;

for (num = 48; num <= 57; ++num)
{
	putchar(num);

	if (num == 57)
	{
		break;
	}

	putchar(',');
	putchar (' ');
}

putchar('\n');

return (0);

}

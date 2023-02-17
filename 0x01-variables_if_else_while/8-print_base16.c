#include <stdio.h>
/**
 * main - entry point of the application
 * Return: returns 0 for success
 */
int main(void)
{
char base_16;

for (base_16 = 0; base_16 <= 10; base_16++)
{
	putchar(48 + base_16);
}

for (base_16 = 'a' ; base_16 <= 'f'; base_16++)
{
	putchar(base_16);
}

putchar ('\n');

return (0);

}

#include  <stdio.h>

int	main()
{
	char c;
	printf("Please enter your name:");

	scanf("%c", &c);
	{
	printf("Hello %c", c);
		c++;
	}
	return 0;
}

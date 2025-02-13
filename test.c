#include "include/push_swap.h"
#include <stdio.h>
#include <stdlib.h>

// int main (int argc, const char *argv[])
// {
// 	printf("argc:%d\n", --argc);
// 	argv++;
// 	while(*argv)
// 	{
// 		printf ("%s\n", *(argv++));
// 	}
// }

// int main(void)
// {
// 	char	*test;
// 	int		index_max;

// 	test = "Hello";
// 	index_max = 5;
// 	while (--index_max > 0)
// 	{
// 		printf("%c\n", test[index_max]);
// 	}
// }

void ft_test(char **test)
{
	while(**test)
	{
		**test = 'P';
		(*test)++;
	}
	return ;
}

int main(void)
{
	char *test = "Hello";
	ft_test(&test);
	printf("%s\n", test);
}
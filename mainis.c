#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main(int argc, char *argv[])
{
	int	i;

	i = 1;
	argv[4][0] = 130;
	argv[5] = "\21";
	while (i < argc)
	{
		printf("char : %c ft_isalpha : %d isalpha : %d\n", argv[i][0], ft_isalpha(argv[i][0]), isalpha(argv[i][0]));
		printf("char : %c ft_isdigit : %d isdigit : %d\n", argv[i][0], ft_isdigit(argv[i][0]), isdigit(argv[i][0]));
		printf("char : %c ft_isalnum : %d isalnum : %d\n", argv[i][0], ft_isalnum(argv[i][0]), isalnum(argv[i][0]));
		printf("char : %c ft_isascii : %d isascii : %d\n", argv[i][0], ft_isascii(argv[i][0]), isascii(argv[i][0]));
		printf("char : %c ft_isprint : %d isprint : %d\n", argv[i][0], ft_isprint(argv[i][0]), isprint(argv[i][0]));
		i++;
	}
}

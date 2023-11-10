/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainallmem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoizel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:10:11 by aoizel            #+#    #+#             */
/*   Updated: 2023/11/10 11:10:08 by aoizel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_printmemhex(char *ptr)
{
	char	base16[16] = "0123456789ABCDEF";
	ft_putchar_fd(base16[*ptr / 16], 1);
	ft_putchar_fd(base16[*ptr % 16], 1);
}

int main(int argc, char *argv[])
{
	int	i;
	char	*array;
	char	*memchr;

	(void)argc;
	i = 0;
	array = calloc(ft_atoi(argv[1]), 1);
	printf("Original memory :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	ft_memset(array, argv[2][0], ft_atoi(argv[1]));
	printf("\nmemset of %s :\n", argv[2]);
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	ft_bzero(array, ft_atoi(argv[1]));
	printf("\nBack to bzero :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	while (i < ft_atoi(argv[1]))
	{
		array[i] = i;
		i++;
	}
	i = 0;
	printf("\nNumbers in memory :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	ft_memcpy(array + 10, array, 10);	
	printf("\nCopy 10 first on 10 last :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	while (i < ft_atoi(argv[1]))
	{
		array[i] = i;
		i++;
	}
	i = 0;
	printf("\nNumbers in memory :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	ft_memcpy(array + 5, array, 10);	
	printf("\nCopy 10 first on index 5 :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	while (i < ft_atoi(argv[1]))
	{
		array[i] = i;
		i++;
	}
	i = 0;
	printf("\nNumbers in memory :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	ft_memmove(array + 10, array, 10);	
	printf("\nMove 10 first on 10 last :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	while (i < ft_atoi(argv[1]))
	{
		array[i] = i;
		i++;
	}
	i = 0;
	printf("\nNumbers in memory :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	i = 0;
	ft_memmove(array + 5, array, 10);	
	printf("\nMove 10 first on index 5 :\n");
	while (i < ft_atoi(argv[1]))
	{
		ft_printmemhex(array + i);
		ft_putchar_fd(' ', 1);
		i++;
	}
	write(1, "\n", 1);
	memchr = (char *)ft_memchr(array, ft_atoi(argv[3]), ft_atoi(argv[1]));
	printf("memchr of %d :\n", ft_atoi(argv[3]));
	if (memchr)
		ft_printmemhex(memchr);
	else
		printf("(null)\n");
	printf("\n Memcmp of 0 and 6 size 2 : %d\n", ft_memcmp(array, array + 6, 2));

	
}


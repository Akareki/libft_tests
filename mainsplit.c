/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoizel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:10:11 by aoizel            #+#    #+#             */
/*   Updated: 2023/11/08 12:54:30 by aoizel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(int argc, char *argv[])
{
	int	i;
	char	**split_array;

	i = 0;
	(void) argc;
	split_array = ft_split(argv[1], argv[2][0]);
	printf("split : splitting %s at delimiter %c :\n", argv[1], argv[2][0]);
	while (split_array[i])
	{
		printf("%s\n", split_array[i]);
		i++;
	}

}


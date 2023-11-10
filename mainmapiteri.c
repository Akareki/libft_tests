/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmapiteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoizel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:10:11 by aoizel            #+#    #+#             */
/*   Updated: 2023/11/10 10:58:48 by aoizel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	ft_indexmod10(unsigned int i, char c)
{
	(void) c;
	return (i % 10 + '0');
}

void	ft_addindex(unsigned int i, char *c)
{
	*c += i;
}

int main(int argc, char *argv[])
{
	char	*dup;

	(void)argc;
	dup = ft_strdup(argv[1]);
	ft_striteri(dup, ft_addindex);
	printf("strmapi : indexmod10 of %s :: %s\n", argv[1], ft_strmapi(argv[1], ft_indexmod10));
	printf("striteri : addindex of %s :: %s\n", argv[1], dup);

}


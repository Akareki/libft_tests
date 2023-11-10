/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainatoitoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoizel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:10:11 by aoizel            #+#    #+#             */
/*   Updated: 2023/11/10 10:59:01 by aoizel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(int argc, char *argv[])
{
	(void) argc;
	printf("atoi : converting %s to int : %d\nreal atoi : %d\n", argv[1], ft_atoi(argv[1]), atoi(argv[1]));
	printf("itoa : converting %d to string : %s\n", ft_atoi(argv[1]), ft_itoa(ft_atoi(argv[1])));
}

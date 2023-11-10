/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoizel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:10:11 by aoizel            #+#    #+#             */
/*   Updated: 2023/11/10 10:41:21 by aoizel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(int argc, char *argv[])
{
	(void) argc;
	printf("ft_strnstr : find %s in first %s in %s result : %s\n", argv[1], argv[3], argv[2], ft_strnstr(argv[2], argv[1], atoi(argv[3])));
}

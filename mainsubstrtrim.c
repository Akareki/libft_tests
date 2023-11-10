/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainsubstrtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoizel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:10:11 by aoizel            #+#    #+#             */
/*   Updated: 2023/11/10 10:47:50 by aoizel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(int argc, char *argv[])
{
	(void) argc;
	printf("substr : Extract from %s from index %s and size %s Result : %s\n", argv[1], argv[2], argv[3], ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	printf("strtrim : trim %s from %s result : %s\n", argv[4], argv[1], ft_strtrim(argv[1], argv[4]));
}

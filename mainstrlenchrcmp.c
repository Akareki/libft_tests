/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrlenchrcmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoizel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:10:11 by aoizel            #+#    #+#             */
/*   Updated: 2023/11/10 10:34:39 by aoizel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(int argc, char *argv[])
{

	(void) argc;
	printf("len of %s : %d\n", argv[1], (int) ft_strlen(argv[1]));
	printf("strchr : %c found in %s : %s\n", argv[2][0], argv[1], ft_strchr(argv[1], argv[2][0]));
	printf("strrchr : %c found in %s : %s\n", argv[2][0], argv[1], ft_strrchr(argv[1], argv[2][0]));
	printf("strcmp : %s and %s in first %s comp : %d\n", argv[1], argv[3], argv[4], ft_strncmp(argv[1], argv[3], atoi(argv[4])));
}

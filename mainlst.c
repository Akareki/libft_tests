#include "libft.h"
#include <stdio.h>

void	printlst(void *content)
{
	printf("%s\n", (char *) content);
}

void	printmap(void *content)
{
	int	*len;

	len = (int *)content; 
	printf("%d\n", *len);
}

void	*contlen(void *content)
{
	int	*len;

	len = malloc(sizeof(int));
	*len = ft_strlen((char *)content);
	return (len);
}

void	freecontent(void *content)
{
	free(content);
}

int main(void)
{
	int	i;
	t_list	*lst;
	t_list	*map;

	i = 0;
	lst = NULL;
	map = NULL;
	while (i < 10)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_substr("ABCDEFGHIJKL", 0, i)));
		i++;
	}
	printf("List =\n");
	ft_lstiter(lst, printlst);
	printf("map strlen of lst\n");
	map = ft_lstmap(lst, contlen, freecontent);
	printf("Print map :\n");
	ft_lstiter(map, printmap);
	ft_lstclear(&lst, freecontent);
	ft_lstclear(&map, freecontent);
	return EXIT_SUCCESS;
}

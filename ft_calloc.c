#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(size * count);
	if(!res)
		return NULL;
	ft_bzero(res,count);
	return (res);
}

// int main()
// {
// 	char *kaku;
// 	//"Hello world"を入れたい
// 	kaku = (char*)ft_calloc(12, sizeof(char));
// 	kaku = ft_strcpy();
// 	printf("%s",kaku);
// 	return 0;
// }
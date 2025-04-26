#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <ctype.h>

// int main()
// {
// 	printf("本物%c\n",toupper(''));
// 	printf("偽物%c\n",ft_toupper(''));
// 	return 0;
// }
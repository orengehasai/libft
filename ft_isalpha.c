#include "libft.h"

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

// int main ()
// {
// 	printf("%d",ft_isalpha('s'));
// 	return (0);
// }
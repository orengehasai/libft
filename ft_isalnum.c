#include "libft.h"

int	ft_isalnum(int c)
{
	return (('0' <= c && c <= '9')
		|| ('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z'));
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d",ft_isalnum('Z'));
// 	return 0;
// }

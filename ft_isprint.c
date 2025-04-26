#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
// #include <ctype.h>
// int main(int argc, char const *argv[])
// {
// 	printf("本物%d\n",isprint(31));
// 	printf("偽物%d",ft_isprint(31));
// 	return 0;
// }

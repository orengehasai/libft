#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int cnt ;

	cnt = 0;
	while(*s != '\0')
	{
		s++;
		cnt++;
	}
	return (cnt);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d",ft_strlen(""));
// 	return 0;
// }

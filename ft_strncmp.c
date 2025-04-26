#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && --n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *s1 = "HELLO WORLD";
// 	char *s2 = "UELLO WORLD";
// 	printf("本物\n%d\n" , strncmp(s1,s2,0));
// 	printf("偽物\n%d\n" , ft_strncmp(s1,s2,0));
// 	return 0;
// }

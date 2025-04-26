#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// #define SIZE 40
// int main(void)
// {
// 	char buffer1[SIZE] = "computer program";
// 	int    ch = 'p';
// 	char *ptr1 = strchr(buffer1, ch);
// 	printf( "本物\nThe first occurrence of %c in '%s' is '%s'\n",
// 			ch, buffer1, ptr1 );
// 	char *ptr2 = ft_strchr(buffer1, ch);
// 	printf( "偽物\nThe first occurrence of %c in '%s' is '%s'\n",
// 			ch, buffer1, ptr2 );
// }
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

	start = s;
	while (*s)
		s++;
	while (s != start)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// #define SIZE 40
// int main(void)
// {
// 	char buf[SIZE] = "computer program";
// 	char * ptr;
// 	int    ch = 'p';
//   /* This illustrates strchr */
// 	ptr = strchr( buf, ch );
// 	printf( "The first occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
//   /* This illustrates strrchr */
// 	ptr = strrchr( buf, ch );
// 	printf( "本物\nThe last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
// 	ptr = ft_strrchr( buf, ch );
// 	printf( "偽物\nThe last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
// }
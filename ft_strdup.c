#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		cnt;

	cnt = 0;
	while (s1[cnt] != '\0')
		cnt++;
	dst = malloc(sizeof(char) * cnt);
	if (!dst)
		return (NULL);
	dst[cnt] = '\0';
	while (--cnt >= 0)
		dst[cnt] = s1[cnt];
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//    char *string = "this is a copy";
//    char *newstr;
// 	if ((newstr = ft_strdup(string)) != NULL)
// 		printf("The new string is: %s\n", newstr);
// 	return 0;
// }
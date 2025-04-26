#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	j;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		j = 0;
		while (haystack[j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//    char *string1 = "needle in a haystack";
//    char *string2 = "haystack";
//    char *result;

// 	result = ft_strstr(string1,string2);
//    /* Result = a pointer to "haystack" */
// 	printf("%s\n", result);
// }

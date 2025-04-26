#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	while (src[srclen])
		srclen++;
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

// int main()
// {
// 	char dst[] = "HELLO WORLD!!!!!!";
// 	char src[] = "KYOVIJUIIJAN";
// 	printf("%ld\n",ft_strlcpy(dst,src,20));
// 	printf("%s",dst);

// 	return 0;
// }

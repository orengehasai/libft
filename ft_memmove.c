#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	while (len > 0)
	{
		dest[len - 1] = source[len - 1];
		len--;
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>
// #define SIZE    21
// char target[SIZE] = "a shiny white sphere";
// int main( void )
// {
//   char * p = target + 8;
//   char * source = target + 2; /* start of "shiny" */
//   printf( "Before memmove, target is \"%s\"\n", target );
//   memmove(p, source, 13);
//   printf( "After memmove, target becomes \"%s\"\n", target );
// }
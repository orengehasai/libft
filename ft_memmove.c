#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	const char *source;
	char tmp[4096];
	size_t cnt;

	dest = (char *)dst;
	source = (const char *)src;
	cnt = 0;
	while (cnt < len)
		tmp[cnt++] = *source++;
	cnt = 0;
	while (cnt < len)
		*dest++ = tmp[cnt++];
	return (dst);
}

// #include <string.h>
// #include <stdio.h>
// #define SIZE    21
// char target[SIZE] = "a shiny white sphere";
// int main( void )
// {
//   char * p = target + 8;  /* p points at the starting character                          of the word we want to replace */
//   char * source = target + 2; /* start of "shiny" */
//   printf( "Before memmove, target is \"%s\"\n", target );
//   memcpy( p, source, 12);
//   printf( "After memmove, target becomes \"%s\"\n", target );
// }
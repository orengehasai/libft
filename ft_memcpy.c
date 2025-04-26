#include "libft.h"
//restrict修飾子はreｓtrict以外からのメモリアクセスによる値の変更を受け付けない（ただしコンパイル時、-0オプションで最適化した時のみ）
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	while (n--)
		*dest++ = *source++;
	return (dst);
}

// int main()
// {
// 	int src[] ={0,257,2,3,4};
// 	int dst[]= {9,8,7,6,5};
// 	int *res = ft_memcpy(dst,src,6);
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		printf("%#010x\n",*res);
// 		res++;
// 	}
// 	return 0;
// }

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
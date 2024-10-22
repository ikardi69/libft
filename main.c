#include "libft.h"
#include <stdio.h>

int main()
{
	char str[] = "hello yesting";
	char str2[] = "hello testing";
	//char *r = ft_strchr(str, '\0');
	//printf("%s\n", ft_strrchr(str, 'h'));
	printf("%s\n", ft_memset(str, 'm', 7));
	return 0;
}

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char ft_test(unsigned int index, char c)
{
	(void)index;
	return (c -= 32);
}
void ft_test2(unsigned int index, char *s)
{
	if (s[index] >= 'A' && s[index] <= 'Z')
		s[index] += 32;
	else
		s[index] = s[index];
}

int main()
{
	//char str[] = "hello ";
	//char str2[] = "testing this code";
	//char *r = ft_strchr(str, '\0');
	//printf("%s\n", ft_strrchr(str, 'h'));
	//printf("%s\n", ft_strstr(str2, "testing"));
	//printf("%d\n", ft_atoi("    \t \n-4556klkhj7879"));
	//char dst[50];
	//printf("%zu\n%s\n", strlcpy(dst, str2, 12), dst);
	//printf("dst %zu\nstr %zu\n", ft_strlen(dst), ft_strlen(str2));
  //printf("%zu\n%s\n", strlcat(dst, str, 7));
	//printf("%s\n", ft_strnstr(str2, "this", 20));
	/*char *dst = ft_substr(str2, 6, ft_strlen(str2));
	if (!dst)
		printf("allocation failed\n");
	else
		printf("%s\n", dst);
	free(dst);*/
	/*char *dst = ft_strjoin(str, str2);
	if (!dst)
		printf("allocation failed\n");
	else
		printf("%s\n", dst);
	free(dst);*/
	/*char str[] = "psthello worldpst";
	char *result = ft_strtrim(str, "pst");
	if (!result)
		printf("allocation failed\n");
	else
		printf("%s\n", result);
	free(result);*/
  /*char str[] = "hello";
  char *dup = ft_strdup(str);
  if (!dup)
    printf("allocation failed\n");
  else
    printf("%s\n", dup);
  free(dup);*/
	/*
	char str[] = "  hello   hello hello";
	char **r = ft_split(NULL, ' ');
	if (!r)
		printf("allocation failed\n");
	else
	{
		for (int i = 0; i < 3; i++)
			printf("%s\n", r[i]);
	}
	
	for (int i = 0; i < sizeof(r); i++)
		free(r[i]);
	// 	*/
	// printf("%s\n", ft_itoa(0));
	// printf("%zu\n",nbr_size(0));
	//printf("%d\n", ft_atoi(52));
	//printf("%d\n",atoi(52));
	/*int value = 0;
	printf("before = %d\n", value);
	ft_memset((unsigned char *)&value, 0, sizeof(value));
	ft_memset((unsigned char *)&value, 0x39, 1);
	ft_memset((unsigned char *)&value + 1, 0x05, 1);
	printf("after = %d\n", value);*/
	/*char str[] = "hello world";
	printf("str size = %zu\n", ft_strlen(str));
	char *r = ft_strmapi(str, ft_test);
	if (!r)
	{
		printf("allocation failed\n");
		return (1);
	}
	printf("str = %s\nr = %s\n", str, r);
	for (int i = 0; i < ft_strlen(str); i++)
		printf("%c", r[i]);
	free(r);*/
	/*
	char str[] = "Hello World";
	printf("before = %s\n", str);
	ft_striteri(str, ft_test2);
	printf("after = %s\n", str);
	*/
	int ptr = open("a", O_WRONLY);
	if (ptr < 0)
	{
		printf("failed to open the file\n");
		return (1);
	}
	ft_putnbr_fd(-34546, ptr);
	close(ptr);
	return 0;
}

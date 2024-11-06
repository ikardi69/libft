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

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
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
/*
	int ptr = open("a", O_WRONLY);
	if (ptr < 0)
	{
		printf("failed to open the file\n");
		return (1);
	}
	ft_putnbr_fd(-34546, ptr);
	close(ptr);*/
	/*
	char str[] = "\0aa\0bbb";
	char **r = ft_split(str, '\0');
	if (!r)
		printf("allocation failed\n");
	for (int i = 0; i < sizeof(r); i++)
	printf("%s\n", r[i]);
	free(r);
	*/
/*	ft_memcmp
	printf("test1 %d\n", ft_memcmp("salut", "salut", 5));
	printf("test1 %d\n", memcmp("salut", "salut", 5));
	printf("test2 %d\n", ft_memcmp("t\200", "t\0", 2));
	printf("test2 %d\n", memcmp("t\200", "t\0", 2));
	printf("test3 %d\n", ft_memcmp("testss", "test", 5));
	printf("test3 %d\n", memcmp("testss", "test", 5));
	printf("test4 %d\n", ft_memcmp("test", "tEst", 4));
	printf("test4 %d\n", memcmp("test", "tEst", 4));
	printf("test5 %d\n", ft_memcmp("", "test", 4));
	printf("test5 %d\n", memcmp("", "test", 4));
	printf("test6 %d\n", ft_memcmp("test", "", 4));
	printf("test6 %d\n", memcmp("test", "", 4));
	printf("test7 %d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("test7 %d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("test8 %d\n", ft_memcmp("abcdefgh", "abcdwxyz", 6));
	printf("test8 %d\n", memcmp("abcdefgh", "abcdwxyz", 6));

	printf("test9 %d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	printf("test9 %d\n", memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	*/
/*
	printf("substr\n");
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

	printf("str = %s\n", str);
	if (!(strsub = ft_substr(str, 0, 0)))
	{
		printf("NULL");
		return (1);
	}
	else
		printf("strsub = %s\n", strsub);
	printf("%zu\n", ft_strlen(strsub));
	if (str == strsub)
		printf("\nA new string was not returned");
	free(strsub);*/
/*
	char *bullshit;
	if (!(strsub = ft_substr(str, 400, 20)))
		ft_print_result("NULL");
	else
	{
		bullshit = (char *)&strsub[30];
		bullshit = "FULL BULLSHIT";
		if (strsub)
			ft_print_result(strsub);
		else
			ft_print_result("rip");
	}
	if (str == strsub)
		ft_print_result("\nA new string was not returned");
	(void)bullshit;
	free(strsub);*/
	int r = ft_strncmp("test\200", "test\0", 6);
	/*if (!r)
	{
		printf("NULL\n");
		return (1);
	}
	else*/
		printf("ft%d\n", r);
	printf("or %d\n", strncmp("test\200", "test\0", 6));
	return 0;
}

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <execinfo.h>
//#include <bsd/string.h>
/*
int set_signature(const char *format, ...)
{
	int g_offset;
	va_list args;
	va_start(args, format);
	g_offset = vsprintf(signature, format, args);
	va_end(args);
	return g_offset;
}*/

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

void del(void *content)
{
    free(content);
}
void	ft_change(void *s)
{
	size_t	i;
	char *r;

	if(!s)
		return ;
	r = (char *)s;
	i = 0;
	while (r[i])
	{
		r[i] = 'f';
		i++;
	}
}

void	*ft_change_pointer(void *s)
{
	size_t	i;
	char *r;
	char *tmp;

	if(!s)
		return (NULL);
	tmp = (char *)s;
	r = ft_strdup(tmp);
	if (!r)
		return (NULL);
	i = 0;
	while (r[i])
	{
		r[i] = 'f';
		i++;
	}
	return (r);
}
/*
void	ft_print_resultnb(int n)
{
	char c;

	if (n >= 10)
		ft_print_result((n / 10));
	c = n % 10 + '0';
	write (1, &c, 1);
}*/

void	f()
{
	system("leaks main");
}

int main()
{
	//atexit(f);
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
	ft_putnbr_fd(2147483647, ptr);
	close(ptr);
*/
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
	/*
	int r = ft_strncmp("test\200", "test\0", 6);
	if (!r)
	{
		printf("NULL\n");
		return (1);
	}
	else
		printf("ft%d\n", r);
	printf("or %d\n", strncmp("test\200", "test\0", 6));*/
	/*char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	if (!(strsub = ft_substr(str, 0, 0)))
		ft_print_result("NULL");
	else
		ft_print_result(strsub);
	if (str == strsub)
		ft_print_result("\nA new string was not returned");
	free(strsub);*/
	/*
	char *str;
    if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)))
        ft_print_result("NULL");
    else
        ft_print_result(str);
	printf("\nstr = %zu\n", ft_strlen("lorem ipsum dol"));*/
	//ft_print_result(ft_atoi(""));
	//printf("%d\n", atoi("-"));
	//printf("%d\n", ft_atoi("-"));
    /*void *mem = malloc(sizeof(mem) * 5);  // Allocate 5 bytes for mem
    if (!mem)               // Check if malloc succeeded
        return (1);
        
    memset(mem, 'e', 5);    // Set 5 bytes to 'e'
    ft_bzero(mem, 5);       // Set 5 bytes to 0
    
    // Type cast void* to unsigned char* for array access
    unsigned char *ptr = (unsigned char *)mem;
    
    int i = 0;
    while (i < 5)  // Changed to 5 to avoid buffer overflow
    {
        if (ptr[i] == 0)    // Now using ptr instead of mem
            printf("%d\n", ptr[i]);
        i++;
    }
    
    free(mem);              // Free allocated memory*/
	//printf("%s\n", ft_strnstr("", "", 0));
	/*
	char *strtrim;
	//char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	strtrim = ft_strtrim("\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ", " \n\t");
	if (!(strtrim))
		ft_print_result("NULL");
	else
	{
		//for (unsigned long int i = 0; i < sizeof(strtrim); i++)
		int i = 0;
		int j = 0;
		while (strtrim[i] != '\0')
		{
			if (strtrim[i] == '\n' || strtrim[i] == '\t')
			{
				printf("t");
				i++;
				j++;
			}
			else
			{
				printf("%c", strtrim[i]);
				i++;
			}
		}
		printf("\nsize strtrim = %zu\n", ft_strlen(strtrim));
		//printf("%s\n", strtrim);
	}*/
		//ft_print_result(strtrim);
	/*if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	free(strtrim);*/
	/*char *res = ft_itoa(0);
	if (!res)
		printf("failed\n");
	else
		printf("%s\n", res);*/
/*
	char	s1[] = "\0";
	char	s2[] = "\0";
	char	*strjoin;
	if (!(strjoin = ft_strjoin("abcd", "efghi")))
		ft_print_result("NULL");
	else
		ft_print_result(strjoin);
	if (strjoin == s1 || strjoin == s2)
		ft_print_result("\nA new string was not returned");
	//printf("main size = %zu\n", ft_strlen(strjoin));
	free(strjoin);
*/
/*
	char *s1 = "where is my ";
 	char *s2 = "malloc ???";
 	char *s3 = "where is my malloc ???";

 	char *res = ft_strjoin(s1, s2);
 	if (!strncmp(res, s3, strlen(s3)))
		printf("well done \n");
	else
		printf("failed\n");
	printf("s3 sizw = %zu, res size = %zu\n", strlen(s3), strlen(res));
	free(res);
*/
 	//char *s1 = "oh no not the empty string !";
 	//char *s2 = "";
/*
	char *s1 = "A";
 	size_t max = strlen(s1) + 1;
 	char *i1 = strnstr(s1, s1, max);
 	char *i2 = ft_strnstr(s1, s1, max);
	printf("i1 = %s\n", i1);
	printf("i2 = %s\n", i2);
 	if (i1 == i2)
 		printf("well done\n");
	else
		printf("failed\n");
*/
	//char	*str1 = "abc";
	//char	*str2 = "abc";
	//size_t	n = 19;
	//char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	//char *res = ft_strnstr(haystack, needle, -1);
	//char *res = ft_strnstr(haystack, "abcd", 9);
/*
	char *res = ft_strnstr("mouhssine simo mouhssine", "mouhssine", 10);
	printf("res = %s\n", res);
	char *res_std = strnstr("mouhssine simo mouhssine", "mouhssine", 10);
	printf("res_std = %s\n", res_std);
	//printf("res_std = %s\n", res_std);
	if (res == res_std)
 		printf("well done\n");
	else
		printf("failed\n");
	//printf("%zu\n", (size_t)-1);
*/
/*
	void	*mem;
	if (!(mem = malloc(sizeof(*mem) * 30)))
	{
		printf("failed\n");
		return (1);
	}
	memset(mem, 'j', 30);
	if (mem != ft_memcpy(((void *)0), ((void *)0), 3))	//memcpy(((void *)0), ((void *)0), 3);		memcpy(mem, "zy\0xw\0vu\0\0tsr", 11)
		write(1, "dest's adress was not returned\n", 31);
	write(1, mem, 30);
	free(mem);
*/
/*
	//char dest[0x100];
	//memset(dest, 'e', 4);
	//printf("dest before = %s\n", dest);
	//char dest_std[0x100];
	//size_t res = ft_strlcpy(dest, "aasdjj;s;sa", 100);
	//printf("res = %zu\n", res);
	//printf("dest = %s\n", dest);
	//size_t	res_std = strlcpy(dest, "aasdjj;s;sa", 100);
	//printf("res_std = %zu\n", res_std);
	//printf("dest = %s\n", dest);
 	char *str = "hello !";
 	char buff1[0xF00];
 	char buff2[0xF00];
 	size_t r1;
 	size_t r2;
 
 	memset(buff1, 'A', 20);
 	memset(buff2, 'A', 20);
 	r1 = strlcpy(buff1, str, 2);
 	r2 = ft_strlcpy(buff2, str, 2);
	printf("r1 = %zu\n", r1);
	printf("buff1 = %s\n", buff1);
	printf("r2 = %zu\n", r2);
	printf("buff2 = %s\n", buff2);
 	if (r1 == r2 && !memcmp(buff1, buff2, 20))
 		printf("well done\n");
 	if (r1 != r2)
 	{
		printf("failed\n");
		return (1);
 	}
 	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15))) 
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	printf("ft = %zu\n", (strlcpy(dest, "lorem", 15)));
	write(1, "\n", 1);
	write(1, dest, 15);
*/

	printf("atoi = %d\n", atoi(NULL));
	//printf("ft_atoi = %d\n", ft_atoi(NULL));


/*
	//printf("%zu\n", strlen("\0aa\0bbb "));
    char **tab = ft_split("      split       this for   me  !       ", ' ');	//ft_split("\0aa\0bbb ", '\0')
    if (!tab) {
        printf("failed\n");
        return 1;
    }
    for (size_t i = 0; tab[i] != NULL; i++)
        printf("tab[%zu] = %s\n", i, tab[i]);
    for (size_t i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
*/

    // Creating a node with integer content
    // int *num = malloc(sizeof(int));  // Allocate memory for the integer
    // *num = 42;   
    // t_list *node = ft_lstnew(num);
	// if (!node)
	// 	return (1);
	// printf("%d\n", *(int *)node->content);
    
    // Creating a node with string content
// Allocate and assign strings correctly (no need to malloc here)
	/*
	 bonus
    char *s1 = "Hello"; // no need to malloc, just assign the literal directly
    t_list *str_node = ft_lstnew(s1);
    if (!str_node)
        return (1);

    char *s2 = "wow"; // again, directly assign the literal
    t_list *strstr_node = ft_lstnew(s2);
    if (!strstr_node)
        return (1);

    // Link nodes
    str_node->next = strstr_node;

    // Create and assign next node
    char *s3 = "le doc"; // no malloc needed, just assign the string
    t_list *s = (t_list *)malloc(sizeof(t_list));
    if (!s)
        return (1);
    s->content = s3;
    s->next = NULL;
    strstr_node->next = s;

    // Print last node content
    t_list *last = ft_lstlast(str_node);
    printf("Last content before adding: %s\n", (char *)last->content); // Expected output: le doc

    // Add the "test last" node at the end of the list
    t_list *testlast = (t_list *)malloc(sizeof(t_list));
    if (!testlast)
        return (1);

    // Use malloc to create the string for this node (you want to free it later)
    char *s4 = (char *)malloc(ft_strlen("test last") + 1);
    if (!s4)
        return (1);
    strcpy(s4, "test last");

    testlast->content = s4;
    testlast->next = NULL;

	printf("last node content = %s\n", (char *)testlast->content);
    // Add new node to the list
    ft_lstadd_back(&str_node, testlast);

    // Now delete the last node and free its content
    //ft_lstdelone(testlast, free);

    // Print the entire list after deletion
    t_list *temp = str_node;
    while (temp)
    {
        printf("node = %s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Clean up the rest of the list (important to avoid memory leaks)
    ft_lstclear(&str_node, free);
    // Don't forget to free when done
    //free(node);
    //free(str_node);
	*/

    // Allocate and assign strings correctly (no need to malloc here)
    // Create nodes with string content
    // printf("List before changes\n");
    // char *str1 = strdup("Hello");
    // char *str2 = strdup("world");
    // char *str3 = strdup("from");
    // char *str4 = strdup("ft_lstclear");

    // t_list *list = NULL;

    // // Add nodes to the list
    // ft_lstadd_back(&list, ft_lstnew(str1));
    // ft_lstadd_back(&list, ft_lstnew(str2));
    // ft_lstadd_back(&list, ft_lstnew(str3));
    // ft_lstadd_back(&list, ft_lstnew(str4));

    // // Print list before clearing
    // t_list *temp = list;
    // while (temp)
    // {
    //     printf("%s\n", (char *)temp->content);
    //     temp = temp->next;
    // }
    // // Clear the list and free the memory
	// //t_lstiter(list, ft_change);
    // t_list *temps = list;
    // while (temps)
    // {
    //     printf("%s\n", (char *)temps->content);
    //     temps = temps->next;
    // }
	// t_list	*mimic = ft_lstmap(list, ft_change_pointer, del);
	// if (!mimic)
	// {
	// 	printf("fail\n");
	//     ft_lstclear(&list, del);
	// 	ft_lstclear(&mimic, del);
	// 	return (1);
	// }
    // temps = mimic;
	// printf("The new list after changes\n");
    // while (temps)
    // {
    //     printf("%s\n", (char *)temps->content);
    //     temps = temps->next;
    // }
    // ft_lstclear(&list, del);
    // ft_lstclear(&mimic, del);

    // //Print list after clearing (should be empty)
    // if (list == NULL && mimic == NULL)
    // {
    //     printf("\nList cleared successfully, list is now NULL.\n");
    // }
    // else
    // {
    //     printf("\nList not cleared correctly!\n");
    // }
/*
ft_strlcat;
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff1[0xF00] = "there is no stars in the sky";
 	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	printf("max = %zu\n", max);
	size_t r1 = strlcat(buff1, str, max);
	printf("r1 = %zu buff1 = %s\n", r1, buff1);
 	size_t r2 = ft_strlcat(buff2, str, max);
	printf("r2 = %zu buff2 = %s\n", r2, buff2);
	if (r1 != r2)
 		printf("failed\n");
	else
		printf("well done\n");
*/
    return (0);
		//printf(("%d, "), (char *)mem[i]);
}

//	MZIRIBMZIRIBMZE123
//	MZIRIB
//	012345678
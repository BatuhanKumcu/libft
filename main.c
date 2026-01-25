#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static char	to_upper_idx(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static void	add_one(unsigned int i, char *c)
{
	(void)i;
	(*c)++;
}

static void	free_split(char **arr)
{
	size_t	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	main(void)
{
	/* ft_atoi */
	printf("ft_atoi: %d\n", ft_atoi("   -42"));

	/* ft_is* */
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isdigit('7'): %d\n", ft_isdigit('7'));
	printf("ft_isalnum('Z'): %d\n", ft_isalnum('Z'));
	printf("ft_isascii(128): %d\n", ft_isascii(128));
	printf("ft_isprint('\\n'): %d\n", ft_isprint('\n'));

	/* ft_strlen */
	printf("ft_strlen(\"selamlar\"): %zu\n", ft_strlen("selamlar"));

	/* ft_toupper / ft_tolower */
	printf("ft_toupper('b'): %c\n", ft_toupper('b'));
	printf("ft_tolower('G'): %c\n", ft_tolower('G'));

	/* ft_memset / ft_bzero */
	{
		char buf[10];

		ft_memset(buf, 'A', 9);
		buf[9] = '\0';
		printf("ft_memset: %s\n", buf);

		ft_bzero(buf, 4);
		printf("ft_bzero (print string): \"%s\"\n", buf);
	}

	/* ft_memcpy */
	{
		char src[] = "42Istanbul";
		char dst[20];

		ft_bzero(dst, sizeof(dst));
		ft_memcpy(dst, src, ft_strlen(src) + 1);
		printf("ft_memcpy: %s\n", dst);
	}

	/* ft_memchr */
	{
		char s[] = "selamlar";
		char *p = ft_memchr(s, 'a', ft_strlen(s));
		printf("ft_memchr 'a': %s\n", p);
	}

	/* ft_memcmp */
	{
		char a[] = "abc";
		char b[] = "abd";
		printf("ft_memcmp(\"abc\",\"abd\",3): %d\n", ft_memcmp(a, b, 3));
	}

	/* ft_strdup */
	{
		char *dup = ft_strdup("hello");
		printf("ft_strdup: %s\n", dup);
		free(dup);
	}

	/* ft_strchr / ft_strrchr */
	{
		char s[] = "banana";
		printf("ft_strchr: %s\n", ft_strchr(s, 'a'));
		printf("ft_strrchr: %s\n", ft_strrchr(s, 'a'));
	}

	/* ft_strncmp */
	printf("ft_strncmp(\"abc\",\"abd\",2): %d\n", ft_strncmp("abc", "abd", 2));
	printf("ft_strncmp(\"abc\",\"abd\",3): %d\n", ft_strncmp("abc", "abd", 3));

	/* ft_strnstr */
	{
		char *res = ft_strnstr("hello 42 istanbul", "42", 20);
		printf("ft_strnstr: %s\n", res);
	}

	/* ft_strlcpy */
	{
		char dst[6];
		size_t r = ft_strlcpy(dst, "selamlar", sizeof(dst));
		printf("ft_strlcpy dst: \"%s\" (return=%zu)\n", dst, r);
	}

	/* ft_strlcat */
	{
		char dst[20];

		ft_bzero(dst, sizeof(dst));
		ft_strlcpy(dst, "hello", sizeof(dst));
		ft_strlcat(dst, " world", sizeof(dst));
		printf("ft_strlcat: \"%s\"\n", dst);
	}

	/* ft_calloc */
	{
		int *arr = (int *)ft_calloc(5, sizeof(int));
		printf("ft_calloc: %d %d %d %d %d\n",
			arr[0], arr[1], arr[2], arr[3], arr[4]);
		free(arr);
	}

	/* ft_putchar / ft_putchar_fd / ft_putstr_fd / ft_putnbr_fd */
	ft_putchar('\n');
	ft_putstr_fd("ft_putstr_fd -> hello\n", 1);
	ft_putchar_fd('X', 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(1337, 1);
	ft_putchar_fd('\n', 1);

	/* ft_substr */
	{
		char *sub = ft_substr("selamlar42", 3, 4);
		printf("ft_substr: %s\n", sub);
		free(sub);
	}

	/* ft_strjoin */
	{
		char *joined = ft_strjoin("42", "Istanbul");
		printf("ft_strjoin: %s\n", joined);
		free(joined);
	}

	/* ft_strtrim */
	{
		char *trimmed = ft_strtrim("   selamlar   ", " ");
		printf("ft_strtrim: \"%s\"\n", trimmed);
		free(trimmed);
	}

	/* ft_split */
	{
		char **parts = ft_split("a,b,c,42", ',');
		printf("ft_split:\n");
		for (int i = 0; parts && parts[i]; i++)
			printf("  [%d] %s\n", i, parts[i]);
		free_split(parts);
	}

	/* ft_strmapi */
	{
		char *mapped = ft_strmapi("selamlar", to_upper_idx);
		printf("ft_strmapi: %s\n", mapped);
		free(mapped);
	}

	/* ft_striteri */
	{
		char s[] = "abcd";
		ft_striteri(s, add_one);
		printf("ft_striteri: %s\n", s);
	}

	return (0);
}

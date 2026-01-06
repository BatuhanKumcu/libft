#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
    /* ft_strlen */
    printf("ft_strlen(\"hello\") = %zu\n", ft_strlen("hello"));
    printf("strlen(\"hello\")    = %zu\n\n", strlen("hello"));

    /* ft_putchar */
    printf("ft_putchar('A'): ");
    ft_putchar('A');
    printf("\n\n");

    /* ft_strncmp */
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n",
           ft_strncmp("abc", "abd", 3));
    printf("strncmp(\"abc\", \"abd\", 3)    = %d\n\n",
           strncmp("abc", "abd", 3));

    /* ft_strlcat */
	{
    char dst1[20] = "Hello ";
    size_t r;

    r = ft_strlcat(dst1, "World", sizeof(dst1));
    printf("ft_strlcat return = %zu, dst = \"%s\"\n\n", r, dst1);
	}


    /* ft_isalpha */
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("isalpha('A')    = %d\n\n", isalpha('A'));

    /* ft_isdigit */
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
    printf("isdigit('5')    = %d\n", isdigit('5'));

    return (0);
}

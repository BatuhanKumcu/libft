#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>


void	ft_putchar(char c);
int		ft_isalpha(int c);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

#endif
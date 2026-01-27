/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* main.c                                             :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: 42_Student                                 +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2026/01/25 15:00:00 by student           #+#    #+#             */
/* Updated: 2026/01/25 15:00:00 by student          ###   ########.fr       */
/* */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <string.h> // Required for strlcpy, strlcat, strnstr on Linux.
                        // On MacOS, remove "bsd/" or rely on string.h
#include "libft.h"

/* ** COMPILATION GUIDE:
** gcc -Wall -Wextra -Werror main.c -L. -lft -lbsd
** (You may need -lbsd for strlcpy/strlcat on Linux)
*/

// --- Helper Macros for Clean Testing ---

#define CHECK_CTYPE(FUNC, NAME) \
	for (int i = -1; i <= 255; i++) { \
		if (!!FUNC(i) != !!NAME(i)) { \
			printf("KO: %s failed on input %d. Expected %d, got %d\n", #NAME, i, !!FUNC(i), !!NAME(i)); \
		} \
	}

#define CHECK_STR_SIZE(STD_F, FT_F, NAME, STR) \
	if (STD_F(STR) != FT_F(STR)) \
		printf("KO: %s failed on \"%s\". Expected %zu, got %zu\n", #NAME, STR, STD_F(STR), FT_F(STR));

#define CHECK_STR_CMP(STD_F, FT_F, NAME, S1, S2, N) \
	if (STD_F(S1, S2, N) != FT_F(S1, S2, N)) \
		printf("KO: %s failed. Expected %d, got %d\n", #NAME, STD_F(S1, S2, N), FT_F(S1, S2, N));

#define CHECK_ATOI(STR) \
	if (atoi(STR) != ft_atoi(STR)) \
		printf("KO: ft_atoi failed on \"%s\". Expected %d, got %d\n", STR, atoi(STR), ft_atoi(STR));

// --- Tests ---

void check_ctypes()
{
	CHECK_CTYPE(isalpha, ft_isalpha);
	CHECK_CTYPE(isdigit, ft_isdigit);
	CHECK_CTYPE(isalnum, ft_isalnum);
//	CHECK_CTYPE(isascii, ft_isascii);
	CHECK_CTYPE(isprint, ft_isprint);
	CHECK_CTYPE(toupper, ft_toupper);
	CHECK_CTYPE(tolower, ft_tolower);
}

void check_string_queries()
{
	// Strlen
	CHECK_STR_SIZE(strlen, ft_strlen, ft_strlen, "");
	CHECK_STR_SIZE(strlen, ft_strlen, ft_strlen, "Hello World");
	
	// Strncmp
	CHECK_STR_CMP(strncmp, ft_strncmp, ft_strncmp, "test", "test", 5);
	CHECK_STR_CMP(strncmp, ft_strncmp, ft_strncmp, "test", "testy", 4);
	CHECK_STR_CMP(strncmp, ft_strncmp, ft_strncmp, "test", "", 0);

	// Strchr & Strrchr
	char *str = "Hello World";
	if (strchr(str, 'l') != ft_strchr(str, 'l')) printf("KO: ft_strchr failed.\n");
	if (strchr(str, 'z') != ft_strchr(str, 'z')) printf("KO: ft_strchr failed on missing char.\n");
	if (strchr(str, '\0') != ft_strchr(str, '\0')) printf("KO: ft_strchr failed on \\0.\n");
	
	if (strrchr(str, 'l') != ft_strrchr(str, 'l')) printf("KO: ft_strrchr failed.\n");
	if (strrchr(str, 'z') != ft_strrchr(str, 'z')) printf("KO: ft_strrchr failed on missing char.\n");
}

void check_memory()
{
	// Memset
	char buff1[20], buff2[20];
	memset(buff1, 'A', 10);
	ft_memset(buff2, 'A', 10);
	if (memcmp(buff1, buff2, 10) != 0) printf("KO: ft_memset failed.\n");

	// Bzero
	memset(buff1, 'A', 20);
	memset(buff2, 'A', 20);
	bzero(buff1, 10);
	ft_bzero(buff2, 10);
	if (memcmp(buff1, buff2, 20) != 0) printf("KO: ft_bzero failed.\n");

	// Memcpy
	memset(buff1, 0, 20); memset(buff2, 0, 20);
	memcpy(buff1, "Test", 4);
	ft_memcpy(buff2, "Test", 4);
	if (memcmp(buff1, buff2, 20) != 0) printf("KO: ft_memcpy failed.\n");

	// Memmove (Overlap test)
	//char str1[] = "123456789";
	//char str2[] = "123456789";
	//memmove(str1 + 2, str1, 4); // Standard
	//ft_memmove(str2 + 2, str2, 4); // User
	//if (memcmp(str1, str2, 9) != 0) printf("KO: ft_memmove overlap failed.\n");

	// Memchr
	if (memchr("Hello", 'e', 5) != ft_memchr("Hello", 'e', 5)) printf("KO: ft_memchr failed.\n");
	
	// Memcmp
	if (memcmp("test", "test", 4) != ft_memcmp("test", "test", 4)) printf("KO: ft_memcmp eq failed.\n");
	if (memcmp("test", "tast", 4) != ft_memcmp("test", "tast", 4)) printf("KO: ft_memcmp diff failed.\n");
}

void check_bsd_strings()
{
	// Strlcpy
	char d1[20], d2[20];
	if (strlcpy(d1, "Hello", 5) != ft_strlcpy(d2, "Hello", 5) || memcmp(d1, d2, 5) != 0)
		printf("KO: ft_strlcpy failed.\n");

	// Strlcat
	strcpy(d1, "He"); strcpy(d2, "He");
	if (strlcat(d1, "llo", 10) != ft_strlcat(d2, "llo", 10) || strcmp(d1, d2) != 0)
		printf("KO: ft_strlcat failed.\n");

	// Strnstr
	const char *big = "Find the needle in the haystack";
	const char *little = "needle";
	if (strnstr(big, little, 30) != ft_strnstr(big, little, 30)) printf("KO: ft_strnstr failed.\n");
	if (strnstr(big, little, 5) != ft_strnstr(big, little, 5)) printf("KO: ft_strnstr size limit failed.\n");
}

void check_conversions()
{
	// Atoi
	CHECK_ATOI("1234");
	CHECK_ATOI("-1234");
	CHECK_ATOI("   +42");
	CHECK_ATOI("2147483647");
	CHECK_ATOI("-2147483648");
	
	// Itoa (Part 2 check using sprintf)
	//char buf[20];
	//char *res;
	//int nums[] = {0, -123, 123, 2147483647, -2147483648};
	//for (int i = 0; i < 5; i++)
	//{
	//	sprintf(buf, "%d", nums[i]);
	//	res = ft_itoa(nums[i]);
	//	if (strcmp(buf, res) != 0)
	//		printf("KO: ft_itoa failed on %d. Expected %s, got %s\n", nums[i], buf, res);
	//	free(res);
	//}
}

void check_allocs()
{
	// Calloc
	int *p1 = calloc(5, sizeof(int));
	int *p2 = ft_calloc(5, sizeof(int));
	if (memcmp(p1, p2, 5 * sizeof(int)) != 0) printf("KO: ft_calloc failed.\n");
	free(p1); free(p2);

	// Strdup
	char *s1 = strdup("Test String");
	char *s2 = ft_strdup("Test String");
	if (strcmp(s1, s2) != 0) printf("KO: ft_strdup failed.\n");
	free(s1); free(s2);
}

int main(void)
{
	// NOTE: Part 2 functions (ft_split, ft_strjoin, etc.) do not have 
	// standard libc equivalents to compare against automatically. 
	// This main focuses on Part 1 strict comparisons and ft_itoa.

	check_ctypes();
	check_string_queries();
	check_memory();
	check_bsd_strings();
	check_conversions();
	check_allocs();

	// If no output appeared above, you are good to go!
	return (0);
}
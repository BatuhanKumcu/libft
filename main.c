#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{

	char	s[] = "selamlar    ceyda arkadaslar";
	unsigned int start = 10;
	size_t	len = 5;
	printf("%s", ft_substr(s,start,len));

	return (0);
}

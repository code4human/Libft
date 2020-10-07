/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:24:15 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/07 14:24:18 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*
** [PROTOTYPE]
** #include <string.h>
** char		*strnstr(const char *haystack, const char *needle, size_t len);
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (needle[0] == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while ((haystack[i] == needle[j]) && (i + j < len))
		{
			if (j == needle_len - 1)
				return (haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	printf("====ft_strnstr====\n");
	printf("%s\n%p\n", ft_strnstr("42Seoul", "Seoul", 5), ft_strnstr("42Seoul", "Cadet", 5));
	printf("====strnstr====\n");
	printf("%s\n%p\n", strnstr("42Seoul", "Seoul", 5), strnstr("42Seoul", "Cadet", 5));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:14:29 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:14:29 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	new = ((char *)malloc(sizeof(char) * (len + 1)));
	if (! new)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main()
{
	char	*str = "teste para string";
	char	*sub;

	sub = ft_substr(str,5,7);
	printf("Original string:%s\n", str);
	printf("Substring:%s", sub);
	free(sub);
	return (0);
}
*/

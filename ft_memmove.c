/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 11:12:56 by ganjinho          #+#    #+#             */
/*   Updated: 2024-04-25 11:12:56 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)str1;
	s2 = (char *)str2;
	i = 0;
	while (i > n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
/*
int	main()
{
	char	dest[] = "String nova";
	const	char src[] = "String antiga";

	printf("Antes da troca dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 5);
	printf("Depois da troca dest = %s, src = %s\n", dest, src);
	return (0);
}
*/

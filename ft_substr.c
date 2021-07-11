/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpersimm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:51:51 by wpersimm          #+#    #+#             */
/*   Updated: 2020/11/02 17:14:53 by wpersimm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ar;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	ar = malloc(len * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ar);
	while (i < len)
		ar[i++] = s[start++];
	ar[i] = 0;
	return (ar);
}

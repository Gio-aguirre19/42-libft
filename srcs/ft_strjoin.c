/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 20:18:59 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/30 21:02:16 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*start;

	if (!(str = (char *)malloc(sizeof(char) *
					(ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1)))
		return (NULL);
	start = str;
	while (*s2)
	{
		while (*s1)
			*str++ = *s1++;
		*str++ = *s2++;
	}
	*str++ = '\0';
	return (start);
}

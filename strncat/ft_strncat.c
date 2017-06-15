/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 22:49:51 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/08 23:24:12 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat (char *dest, const char *src, int n)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while(src[i] && i < (n - 1))
		i++;
	while(dest[j])
		j++;
	dest[j] = *(dest[j] + (char*)malloc((i + 1) * sizeof(char)));
	i = 0;
	while(src[i] && i < (n - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return(dest);

}

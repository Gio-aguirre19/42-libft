/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 22:49:51 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/08 23:14:40 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat (char *dest, const char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while(src[i])
		i++;
	while(dest[j])
		j++;
	dest[j] = *(dest[j] + (char*)malloc((i + 1) * sizeof(char)));
	i = 0;
	while(src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return(dest);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:34:38 by gaguirre          #+#    #+#             */
/*   Updated: 2017/07/01 21:51:01 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t		intlen(int n)
{
	size_t			i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char				*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	n_cpy;

	len = intlen(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = n_cpy % 10 + '0';
	while (n_cpy /= 10)
		str[--len] = n_cpy % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}

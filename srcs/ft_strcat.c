/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 22:49:51 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/25 14:35:46 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat (char *dest, const char *src)
{
	char *start;

	start = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest++ = '\0';
	return (start);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:31:52 by smathe            #+#    #+#             */
/*   Updated: 2018/06/28 13:37:55 by smathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int len;

	len = 0;
	i = -1;
	while (dest[len])
		len++;
	while (*(src + ++i) && i < (int)n)
		(*(dest + len++) = *(src + i));
	*(dest + len) = '\0';
	return (dest);
}

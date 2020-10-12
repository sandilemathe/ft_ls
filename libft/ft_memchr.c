/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:36:51 by smathe            #+#    #+#             */
/*   Updated: 2018/06/28 13:39:17 by smathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	int				i;
	unsigned char	*temp;
	unsigned char	chr;

	i = 0;
	chr = (unsigned char)c;
	temp = (unsigned char *)str;
	while (n--)
	{
		if (temp[i] == chr)
			return (temp + i);
		i++;
	}
	return (NULL);
}

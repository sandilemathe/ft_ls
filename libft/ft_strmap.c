/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 08:39:03 by smathe            #+#    #+#             */
/*   Updated: 2018/06/28 13:44:46 by smathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*mpstr;

	if (s == NULL || f == NULL)
		return (NULL);
	mpstr = (char*)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (mpstr == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		mpstr[i] = f(s[i]);
	}
	mpstr[i] = '\0';
	return (mpstr);
}

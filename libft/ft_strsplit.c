/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:15:35 by smathe            #+#    #+#             */
/*   Updated: 2018/06/28 13:49:39 by smathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_wrd(char const *s, char c)
{
	int	b;
	int	word;

	b = 0;
	word = 0;
	while (s[b])
	{
		if (s[b] == c)
			while (s[b] == c)
				b++;
		if (s[b])
		{
			word++;
			while (s[b] != c && s[b])
				b++;
		}
	}
	return (word);
}

static int	num_char(char const *s, char c)
{
	int count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		len;
	char	**str;

	i = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char**)malloc(sizeof(char*) * count_wrd(s, c) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			str[len] = ft_strsub(s, i, num_char(&s[i], c));
			len++;
			i = i + num_char(&s[i], c);
		}
		while (s[i] && s[i] == c)
			i++;
	}
	str[len] = NULL;
	return (str);
}

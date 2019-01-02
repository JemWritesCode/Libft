/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:01:38 by jcope             #+#    #+#             */
/*   Updated: 2018/10/22 23:02:56 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	x;
	size_t	k;
	char	**new;

	i = 0;
	k = 0;
	if (!s || !(new = (char **)malloc(sizeof(char *) * (ft_wordcount((char*)s, c) + 1))))
		return (NULL);
	while (i < ft_wordcount((char*)s, c))
	{
		if (!(new[i] = (char *)malloc(sizeof(char) * (ft_wordlen(&s[k], c) + 1))))
			return (NULL);
		x = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			new[i][x++] = s[k++];
		new[i][x] = '\0';
		i++;
	}
	new[i] = NULL;
	return (new);
}

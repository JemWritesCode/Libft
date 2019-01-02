/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:01:38 by jcope             #+#    #+#             */
/*   Updated: 2018/10/22 23:02:56 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char *str, char c)
{
	int		count;

	count = 0;
	while(*str)
	{
		if (*str != c)
			count++;
		while(*str != c && *(str+1))
				str++;
		str++;
	}
	return (count);
}

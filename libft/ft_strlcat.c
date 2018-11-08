/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:01:37 by jcope             #+#    #+#             */
/*   Updated: 2018/10/22 23:02:55 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{ //Currently seeing if I can shorten this.
	int len;
	int i;
	size_t size;

	len = ft_strlen(dst);
	size = len + ft_strlen(src);
	i = 0;
	dstsize -= len;
	while(src[i] != '\0' && dstsize-- > 1)
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (size);
}
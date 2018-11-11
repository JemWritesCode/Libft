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
{
	char	*odst;
	char	*osrc;
	size_t	n;
	size_t	dlen;

	n = dstsize;
	osrc = (char*)src;
	odst = (char*)dst;
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	n = dstsize - dlen;
	if (n-- == 0)
		return (dlen + strlen(src));
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dlen + (src - osrc));
}

//	size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
//	{
//		size_t dlen;
//		int i;
//		size_t initial_len;
//		dlen = ft_strlen(dst);
//		initial_len = 0;
//		i = 0;
//		if(dstsize > dlen){
//			dstsize -= dlen;
//			initial_len = dlen;
//		}
//		while (src[i] != '\0' && dstsize-- > 1)
//		{b
//			dst[dlen + i] = src[i];
//			i++;
//		}
//		dst[dlen + i] = '\0';
//		return (initial_len + ft_strlen(src));
//	}
 // #include "libft.h"
// 
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// { //Currently seeing if I can shorten this.
// 	int len;
// {
// 	int dlen;
// 	int i;
// 	size_t size;
// 
// 	len = ft_strlen(dst);
// 	size = len + ft_strlen(src);
// 	dlen = ft_strlen(dst);
// 	i = 0;
// 	dstsize -= len;
// 	while(src[i] != '\0' && dstsize-- > 1)
// 	{
// 		dst[len + i] = src[i];
// 		i++;
// 	}
// 	dst[len + i] = '\0';
// 	return (size);
// } 
// 	dstsize -= dlen;
// 	while (src[i++] != '\0' && dstsize-- > 1)
// 		dst[dlen + (i - 1)] = src[i - 1];
// 	dst[dlen + i] = '\0';
// 	return (dlen + ft_strlen(src));
// }
//  
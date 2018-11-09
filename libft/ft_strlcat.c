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

/*
** if(dstsize > dlen) //because it's unsigned numbers. 
** Without this there's an issue with going negative.
*/

//looking at how OpenBSD works.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *odst = dst;
	char *osrc;

	osrc = (char*)src;
	size_t n = dstsize;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end. */
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	n = dstsize - dlen;
	if (n-- == 0)
		return(dlen + strlen(src));
	while (*src != '\0') {
		if (n != 0) {
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return(dlen + (src - osrc));	/* count does not include NUL */
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
//		{
//			dst[dlen + i] = src[i];
//			i++;
//		}
//		dst[dlen + i] = '\0';
//		return (initial_len + ft_strlen(src));
//	}

// #include "libft.h"
// 
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	int dlen;
// 	int i;
// 
// 	dlen = ft_strlen(dst);
// 	i = 0;
// 	dstsize -= dlen;
// 	while (src[i++] != '\0' && dstsize-- > 1)
// 		dst[dlen + (i - 1)] = src[i - 1];
// 	dst[dlen + i] = '\0';
// 	return (dlen + ft_strlen(src));
// }
// 
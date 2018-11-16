/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:01:34 by jcope             #+#    #+#             */
/*   Updated: 2018/10/22 23:02:53 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
 {
	char	*temp[len];

	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
 	return (dst);
 }






// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 
// 	size_t i;
// 	
// 	i = 0;
// 	while (((char*)src)[i] != '\0' && i < len)
// 	{
// 		((char*)dst)[i] = ((char*)src)[i];
// 		i++;
// 	}
// 	return (dst);
// }

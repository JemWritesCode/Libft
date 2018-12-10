/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcope <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:01:38 by jcope             #+#    #+#             */
/*   Updated: 2018/10/22 23:02:56 by jcope            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = ft_strlen(s);
	while(ft_isspace(s[i]))
		i--;
	len -= ft_strlen(s) - i;
	i = 0;
	while(ft_isspace(s[i]))
		i++;
	len -= i;
	if(!(new = ft_strnew(len)))
 		return (NULL);
 	ft_strncpy(new, s + i, len);
 	new[ft_strlen(new)] = '\0';
	return(new);
}

// char			*ft_strtrim(char const *s)
// {
// 	char	*new;
// 	int		i;
// 	int		len;
// 
// 
// 	len = ft_strlen(s);
// 	i = ft_strlen(s);
// 	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
// 		i--;
// 	len -= ft_strlen(s) - i;
// 	i = 0;
// 	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
// 		i++;
// 	len -= i;
// 	if(!(new = ft_strnew(len)))
//  		return (NULL);
//  	ft_strncpy(new, s + i, len);
//  	new[ft_strlen(new)] = '\0';
// 	return(new);
// }


// char			*ft_strtrim(char const *s)
// {
// 	char	*new;
// 	int		i;
// 	int		k;
// 	int		len;
// 
// 	i = 0;
// 	k = 0;
// 	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
// 		i++;
// 	if(!(new = ft_strnew(ft_strlen(s - i))))
// 		return (NULL);
// 	while(s[i])
// 	{
// 		new[k] = s[i];
// 		i++;
// 		k++;
// 	}
// 	new[k] = '\0';
// 	while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
// 	{
// 		new[k] = '\0';
// 		i--;
// 		k--;
// 	}
// 	return(new);
// }

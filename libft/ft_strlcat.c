/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoykka <koykka.atte@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:27:25 by akoykka           #+#    #+#             */
/*   Updated: 2021/12/03 18:21:00 by akoykka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlcatlen(const char *s, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (s[i] && i < dstsize)
		++i;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	src_i;

	src_i = 0;
	dstlen = ft_strlcatlen(dst, dstsize);
	if (dstsize == 0 || ft_strlen(dst) > dstsize)
		return (dstlen + ft_strlen(src));
	while ((dstsize - 1) > src_i + dstlen && src[src_i])
	{
		dst[dstlen + src_i] = src[src_i];
		++src_i;
	}
	dst[dstlen + src_i] = '\0';
	return (dstlen + ft_strlen(src));
}

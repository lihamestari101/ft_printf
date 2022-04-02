/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoykka <akoykka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:38:37 by akoykka           #+#    #+#             */
/*   Updated: 2021/12/17 21:07:55 by akoykka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (!dst & !src)
		len = 0;
	if (dst < src)
	{
		while (len--)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			++i;
		}
	}
	else
	{
		while (len--)
			((unsigned char *)dst)[len] = ((const unsigned char *)src)[len];
	}
	return (dst);
}

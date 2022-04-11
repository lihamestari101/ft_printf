/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoykka <akoykka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:05:55 by akoykka           #+#    #+#             */
/*   Updated: 2022/04/11 18:34:10 by akoykka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	number_to_char(unsigned long long number)
{
	if (number >= 0 && number <= 9)
		return (number + '0');
	return (number + 87);
}		

char	*base_to_ascii(unsigned long long number, int base)
{
	char	*conversion;

	if (number / base == 0)
	{
		conversion = ft_strnew(50);
		conversion[ft_strlen(conversion)] = number_to_char(number);
		return (conversion);
	}
	else
	{
		conversion = base_to_ascii(number / base, base);
		conversion[ft_strlen(conversion)] = number_to_char(number % base);
		return (conversion);
	}
}

void	toupper_everything(char *number)
{
	while (*number)
	{
		*number = ft_toupper(*number);
		++number;
	}
}

/*
char	longlong_to_char(long long number)
{
	if (number < 0)
		number *= -1;
	if (number >= 0 && number <= 9)
		return (number + '0');
	return (number + 87);
}		
char	*longlong_to_ascii(long long number, int base)
{
	char	*conversion;

	if (number / base == 0)
	{
		conversion = ft_strnew(50);
		if (number < 0)
			conversion[0] = '-';
		conversion[ft_strlen(conversion)] = longlong_to_char(number);
		return (conversion);
	}
	else
	{
		conversion = longlong_to_ascii(number / base, base);
		conversion[ft_strlen(conversion)] = longlong_to_char(number % base);
		return (conversion);
	}
}
*/
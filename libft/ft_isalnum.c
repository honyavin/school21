/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evikings <evikings@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:54:21 by evikings          #+#    #+#             */
/*   Updated: 2021/10/19 22:37:25 by evikings         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
isalnum
DESCRIPTION
This function returns non-zero value if c is a 
digit or a letter, else it returns 0.
The C library function int isalnum(int c) 
checks if the passed character is alphanumeric.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evikings <evikings@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:13:03 by evikings          #+#    #+#             */
/*   Updated: 2021/10/19 22:45:53 by evikings         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Функция memchr ищет вхождение в массив (область памяти) символа, код которого 
задан аргументом c, сравнивая каждый байт массива (области памяти) 
определенный как unsigned char с кодом искомого символа. 
Если искомый символ найден, то возвращается адрес 
найденного символа и сравнение завершается. Если, 
после проверки n байтов, искомый символ не найден, 
то сравнение прекращается и функция возвращает NULL.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			t;
	unsigned char	*ss;
	unsigned char	cc;

	t = 0;
	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	while (t < n)
	{
		if (ss[t] == cc)
			return ((void *)(ss + t));
		t++;
	}
	return (NULL);
}

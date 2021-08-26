/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_memcpy.c                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/26 08:20:39 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/26 08:54:08 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size len)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	p_dst = dst;
	p_src = src;
	while (len--)
		*p_dst++ = *p_src++;
	return (dst);
}

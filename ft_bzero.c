/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_bzero.c                                           :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/26 07:46:21 by gcoelho-            #+#    #+#            */
/*  Updated: 2021/08/26 08:51:09 by gcoelho-           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, t_size len)
{
	char	*ptr;

	ptr = b;
	while (len--)
		*ptr++ = '\0';
}

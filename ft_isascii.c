/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:31:37 by eforra-c          #+#    #+#             */
/*   Updated: 2024/06/28 14:31:39 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{ /*Se o caractere não for um ASCII entre 0 e octal 0177, retorna zero */
	if (c >= 0 && c <= 127)
		return (1);
	/* Se o valor de c for zero, essa função deve retornar um valor
diferente de zero, então não se pode retornar c */
	return (0);
}

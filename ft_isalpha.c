/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:31:47 by eforra-c          #+#    #+#             */
/*   Updated: 2024/06/28 14:31:49 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{ /*Verifica se c é uma letra maiuscula ou minuscula */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	/* Verifica se c está entre 65(A) e 90(Z) na tabela ASCII
	Verifica se c está entre 97(a) e 122(z) na tabela ASCII */
		return (1);
	return (0);
	/* Retorna verdadeiro(1) ou falso(0) */
}

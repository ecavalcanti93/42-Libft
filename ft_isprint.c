/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:30:56 by eforra-c          #+#    #+#             */
/*   Updated: 2024/06/28 14:31:03 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Verificar se são caracteres imprimiveis */
int	ft_isprint(int c)
{ /*Verifica se c está entre 32 e 126 decimais */
	if (c >= 32 && c <= 126)
		return (c);
	/* Se confirmado, c sera um valor diferente de zero */
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:35:09 by eforra-c          #+#    #+#             */
/*   Updated: 2024/07/01 17:35:09 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*A função memcpy() copia n bytes da área de memória src para a área
de memória dst. Se dst e src se sobrepõem, o comportamento é indefinido.
A função retorna o valor original de dst*/
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *tmp_dst; //Ponteiro temporario para dst
    unsigned char   *tmp_src; //Ponteiro temporario para src
    size_t  i; //Indice do tipo size_t

    tmp_dst = (unsigned char *)src;
    tmp_src = (unsigned char *)dst;

    while (dst == src || !n) //Verifica se dst é igual a src ou igual a 0
    {
        return (dst); //Se sim, retorna dst
    }

    while (n > i) // Copia n bytes de src para dst
    {
        tmp_src[i] = tmp_dst[i]; //Copia o byte i de src para byte i de dst
        i++; //Incrementa o indice i
    }

    return (dst); //Retorna o ponteiro dst
}
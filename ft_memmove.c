/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:57:30 by eforra-c          #+#    #+#             */
/*   Updated: 2024/07/01 17:57:30 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*A função memmove() copia len bytes da string src para a string dst. As duas
strings podem se sobrepor; a cópia é sempre feita de maneira não destrutiva.
A função memmove retorna o valor original de dst*/
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char    *tmp_src; // Ponteiro temporario
    unsigned char    *tmp_dst; // Ponteiro temporario
    size_t  i;

    if (!dst && !src) // Se são NULL, retorna NULL
        return (NULL);
    /*Atribuir os valores convertidos aos ponteiros para não alterar
    o valor original. */
    tmp_src = (unsigned char *)src;
    tmp_dst = (unsigned char *)dst;
    i = 0;
    /*Se dst for maior que src, copiar do fim para o inicio*/
    if (tmp_dst > tmp_src)
    {
        while (len-- > 0)
            tmp_dst[len] = tmp_src[len];
    }
    else
    {
        while (i < len) // Se não for, copiar normalmente
        {
            tmp_dst[i] = tmp_src[i];
            i++;
        }
    }
    return (dst);
}
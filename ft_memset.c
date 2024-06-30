/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:29:38 by eforra-c          #+#    #+#             */
/*   Updated: 2024/06/30 19:29:38 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Preenche os primeiros 'len' bytes da memória apontada por b com o valor c*/
void    *ft_memset(void *b, int c, site_t len)
{
    unsigned char   *s; /* ponteiro temporario*/
    site_t  i;

    i = 0;
    s = b; /* Atribuir o ponteiro b ao ponteiro s*/
    while (i < len) /*Loop para preencher 'len' bytes da memória com o valor*/
    {
        s[i] = (unsigned char)c; /*Converte 'c' para unsigned char
        e atribui ao byte atual*/
        i++;
    }
    return(b);
}
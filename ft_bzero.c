/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:44:49 by eforra-c          #+#    #+#             */
/*   Updated: 2024/06/30 19:44:49 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função bzero() escreve n bytes 0 a uma string, se nao for 0 não faz nada.
#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    *tmp_ptr; // Ponteiro temporario

    //Fazer o ponteiro ser igual a b convertido para char
    tmp_ptr = (char *)s;
    //Looping no ponteiro enquanto nao alcançamos n
    while (n > 0)
    {
        //Atribuir 0 byte ao ponteiro temporario
        *(tmp_ptr++) = 0;
        n--; //Reduzindo o n em 1, define n bytes como 0
    }
}

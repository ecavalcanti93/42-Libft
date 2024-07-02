/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:10:01 by eforra-c          #+#    #+#             */
/*   Updated: 2024/07/02 12:10:01 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*A função strlcpy sempre retorna o comprimento da string,
que é o comprimento de src, mesmo que tenha sido necessario truncar a string
para termina-la com um caracter nulo*/
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i; //Variavel p/ controlar o indice de iteração
    size_t  src_len; // Variavel para armazenar o comprimento de src

    src_len = 0;
    if (src != NULL) //Verifica se src não é nulo
    {
        src_len = ft_strlen(src); //Calcular o comprimento de src com strlen
        if (dst != NULL && dstsize != 0) //dst não é nulo e dstsize > que 0
        {
            i = 0;
            /*Copia caracteres de src para dst enquanto houver espaço em dst
            e não ultrapassar dstsize*/
            while ((i < src_len) && i < (dstsize - 1))
            {
                dst[i] = src[i]; //Copia o caracter atual de src para dst
                i++;
            }
            dst[i] = '\0'; //Garante que src termine com um caracter nulo
        }
    }
    return (src_len);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eforra-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:11:28 by eforra-c          #+#    #+#             */
/*   Updated: 2024/06/28 14:11:28 by eforra-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *str)
{ /*Utilizar size_t pq é maior que int */
    size_t  i;

    i = 0;
    while (str[i] != '\0')
        i++;
    /*A condição não sera executada quando
    o caracter lido for nulo, retornando falso*/
    return (i);
    /* Retorna o comprimento da string, exluindo o 
    caracter nulo no final*/
}
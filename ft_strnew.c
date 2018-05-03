/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 14:56:28 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/03 13:11:13 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*new;

	i = 0;
	if ((new = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	while (i <= size)
		new[i++] = '\0';
	return (new);
}

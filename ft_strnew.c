/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 14:56:28 by cooswold          #+#    #+#             */
/*   Updated: 2018/04/29 16:19:17 by cooswold         ###   ########.fr       */
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
	new[size] = '\0';
	while (new[i] != '\0')
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 01:47:50 by marvin            #+#    #+#             */
/*   Updated: 2025/11/16 01:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char str1[], const char str2[], size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (0);
	while (str1[i] && str2[i]
		&& i < num - 1) /*-1 to compare up to exactly num characters (then the last comparison is done outside the loop(in the return statement))*/
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 04:59:13 by marvin            #+#    #+#             */
/*   Updated: 2025/11/14 04:59:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char dest[], const char src[], size_t d_size)
/*d_size = total size of destination buffer exp: buf[10] --> d_size = 10*/
{
	size_t	j;
	size_t	size_src;
	size_t	size_dest;

	j = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest); /*current length of destination string exp: buf[10] = "Hello" --> size_dest = 5 */
	if (d_size == 0)
		return (size_src);
	if (d_size <= size_dest)
		return (d_size + size_src);
	/*if there is space in destination buffer, append src to dest: (d_size > size_dest) */
	while (src[j]
		&& size_dest + j < d_size - 1) /*-1 to leave space for null terminator*/
	{
		dest[size_dest + j] = src[j];
		j++;
	}
	dest[size_dest + j] = '\0';
	return (size_dest + size_src);
}

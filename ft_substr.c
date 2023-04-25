/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpelegri <gpelegrines@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:46:11 by gpelegri          #+#    #+#             */
/*   Updated: 2023/04/13 10:46:51 by gpelegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<malloc.h> 
#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const *dest;
	size_t	i;

	i = 0;
	if (!s || len <= 0 || start > ft_strlen(s))
		return(NULL);

	dest = sizeof(len * (1 + sizeof(char)));
	while (i < len)
	{
	*(char const *)(dest + i) = *(char const *)(s + start);
	i++;
	}
	return(dest);
}

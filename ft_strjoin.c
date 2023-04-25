/* ************************************************************************** */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char const	*s;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s = malloc(sizeof(s1 + s2));
	while (i < ft_strlen(s1))
	{
		*(s + i) = *(s1 + i);
		i++;
	}
	while (j < ft_strlen(s2))
	{
		*(s + i + j) = *(s2 + j);
		j++;
	}
	return (s);
}

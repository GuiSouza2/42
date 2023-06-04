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
#include	<string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmapi;
	size_t	i;

	strmapi = malloc(sizeof(char) * (strlen(s) + 1));
	while(i < strlen(s))
	{
		*(strmapi + i) = f (i, *(s + i));
		i++;
	}
	*(strmapi + i) = '\0';
	return(strmapi);
}

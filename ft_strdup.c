/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpelegri <gpelegrines@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:46:11 by gpelegri          #+#    #+#             */
/*   Updated: 2023/04/17 18:38:53 by gpelegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <malloc.h>

char	*ft_strdup(const char *s)
{
	const char	*dup;

	if (!s)
		return(NULL);
	
	dup = malloc(sizeof(s));
	dup = s;
	return (dup);
}

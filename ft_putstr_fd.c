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

#include <unistd.h>
#include "libft.h"

void	*ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s)
	{
	ft_putchar_fd(*(s + i), fd);
	i++;
	}
}

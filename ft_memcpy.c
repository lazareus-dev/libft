/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 18:22:28 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:22:28 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*s;
	size_t	i;

	i = 0;
	p = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (p);
}

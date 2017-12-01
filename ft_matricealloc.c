/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_matricealloc.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 18:22:27 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:27:46 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	**ft_matricealloc(size_t d1, size_t d2)
{
	char	**mem;
	size_t	i;

	mem = (char **)malloc(d1);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < d1)
		mem[i++] = ft_memalloc(d2);
	return ((void **)mem);
}

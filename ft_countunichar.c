/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countunichar.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/22 19:57:28 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/22 20:13:38 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_countunichar(unsigned int c, size_t *ret)
{
	if (c < 0x80)
		(*ret)++;
	else if (c <= 0x7FF)
		*ret += 2;
	else if (c <= 0xFFFF)
		*ret += 3;
	else if (c <= 0x10FFFF)
		*ret += 4;
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strinit.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/14 18:10:36 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/20 10:41:12 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strinit(size_t size, char c)
{
	char	*str;
	size_t	i;

	str = ft_strnew(size);
	if (!str)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

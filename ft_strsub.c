/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 18:22:34 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:22:34 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s)
	{
		str = ft_strnew(len);
		if (!str)
			return (NULL);
		i = 0;
		while (i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		return (str);
	}
	return (NULL);
}

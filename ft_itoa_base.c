/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 18:22:26 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/08 18:37:55 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static long		ft_abs(int n)
{
	return ((n < 0) ? (long)-n : (long)n);
}

static int		ft_nbr_len_base(int n, int base)
{
	int	len;

	len = 1;
	while ((n /= base) != 0)
		len++;
	return (len);
}

char			*ft_itoa_base(int n, int base)
{
	int		i;
	int		len;
	char	*out;
	char	*hexa;

	if (base == 10)
		return (ft_itoa(n));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(hexa = ft_strdup("0123456789abcdef")))
		return (NULL);
	n = ft_abs(n);
	len = ft_nbr_len_base(n, base);
	if(!(out = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (i++ < len)
	{
		out[len - i] = hexa[n % base];
		n /= base;
	}
	out[len] = '\0';
	return (out);
}
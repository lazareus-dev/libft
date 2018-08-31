/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 18:22:29 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/28 14:37:43 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_reveal_blanks(char const *s)
{
	if (!s)
		return ;
	while (*s)
	{
		if (*s == '\n')
		{
			write(1, "\\n", 2);
			s++;
		}
		else if (*s == '\t')
		{
			write(1, "\\t", 2);
			s++;
		}
		write(1, s++, 1);
	}
}
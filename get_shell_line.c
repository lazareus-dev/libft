/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   shell_get_line.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/08 14:19:15 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/18 14:10:58 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	get_shell_line(char **input)
{
	int		retread;
	int		count;
	char	c;
	int		i;

	*input = ft_strnew(1);
	count = 1;
	i = 0;
	while ((retread = read(0, &c, 1)) && c != '\n')
	{
		*(*input + i) = c;
		*input = ft_myrealloc(*input, count, count + 1);
		count++;
		i++;
	}
	*(*input + i) = '\0';
	if (!c)
	{
		ft_strdel(input);
		return (0);
	}
	return (1);
}

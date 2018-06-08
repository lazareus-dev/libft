/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   shell_get_line.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/08 14:19:15 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/08 14:32:15 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	get_shell_line(char **input)
{
	int		retread;
	char	buf;
	int		i;
	int		count;

	*input = ft_strnew(1);
	count = 1;
	i = 0;
	while ((retread = read(0, &buf, 1)) && buf != '\n')
	{
		*(*input + i++) = buf;
		*input = ft_myrealloc(*input, count, count + 1);
		count++;
	}
	*(*input + i) = '\0';
	if (!retread)
	{
		free(*input);
		return (0);
	}
	return (1);
}

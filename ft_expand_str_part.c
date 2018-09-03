/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_expand_str_part.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/02 15:16:05 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/09/02 15:18:44 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_expand_str_part(char **str, char *ptr, size_t size, char *replace)
{
	size_t	len_start;
	char	*tmp;
	char	*start;
	char	*end;
	size_t	ret;

	start = ft_strsub((*str), 0, (ptr - (*str)));
	len_start = ft_strlen(start);
	end = ft_strsub((*str), (len_start + size + 1),
			(ft_strlen(*str) - (len_start + size)));
	ft_strdel(str);
	if (start)
		tmp = ft_strjoin(start, replace);
	else
		tmp = ft_strdup(replace);
	if (end)
		(*str) = ft_strjoin(tmp, end);
	else
		(*str) = ft_strdup(tmp);
	ret = ft_strlen(start) + ft_strlen(replace) + 1;
    ft_strdel(&start);
    ft_strdel(&end);
    ft_strdel(&tmp);
	return (ret);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstrdel.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/12 18:57:52 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/12 19:00:01 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrdel(void *content, size_t content_size)
{
	char	*str;

	str = (char *)content;
	ft_strdel(&str);
	content_size = 0;
}

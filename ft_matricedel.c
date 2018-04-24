/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_matricedel.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/10 13:15:54 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 13:22:12 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_matricedel(char ***matrice)
{
	if (*matrice && **matrice)
	{
		while (*matrice)
		{
			while (**matrice)
				free(**matrice);
			free(*matrice);
		}
	}
}

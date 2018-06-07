/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_matricedel.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/10 13:15:54 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/07 17:19:03 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_matricedel(char ***pointer)
{
	int		i;
	char	**matrice;

	i = 0;
	matrice = *pointer;
	if (pointer && matrice)
	{
		while (matrice[i] != NULL)
		{
			free(matrice[i]);
			i++;
		}
		free(matrice);
		pointer = NULL;
	}
}

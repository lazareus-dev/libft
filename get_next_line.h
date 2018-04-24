/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/24 10:16:39 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/24 10:16:45 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# define EOF (-1)
# define BUFF_SIZE 4096

typedef	struct	s_getch
{
	int			fd;
	int			n;
	char		buf[BUFF_SIZE];
	char		*bufp;
}				t_getch;

int				get_next_line(const int fd, char **line);
static t_getch	*set_getch(const int fd);
static t_list	*tog_lst(t_list **lst, const int fd);

#endif

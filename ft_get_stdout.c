/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_stdout.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/06 21:02:25 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/06 21:02:41 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_get_stdout(int *pfd, int *save)
{
	char	*rslt;
	char	*tmp;
	char	buff[READ_SIZE + 1];

	fflush(stdout);
	rslt = ft_strnew(0);
	close(pfd[1]);
	close(1);
	bzero(buff, READ_SIZE + 1);
	while (read(pfd[0], buff, READ_SIZE) > 0)
	{
		tmp = rslt;
		rslt = ft_strjoin(tmp, buff);
		free(tmp);
		bzero(buff, READ_SIZE + 1);
	}
	close(pfd[0]);
	dup2(*save, 1);
	close(*save);
	return (rslt);
}

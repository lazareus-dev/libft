/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_hash_addkv.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tle-coza <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/28 18:55:36 by tle-coza     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/28 19:41:56 by tle-coza    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_hash_addkv(t_hash_table *hashtable, char *key, char *value)
{
	t_list			*new_list;
	t_list			*current_list;
	unsigned int	hashkey;

	hashkey = ft_jenkins_hash(key, ft_strlen(key));
	hashkey %= hashtable->size;
	if (!(new_list = ft_lstnew(NULL, 0)))
		return (1);
	current_list = ft_hash_find(hashtable, key);
	if (current_list != NULL)
		return (1);
	new_list->content = ft_strdup(value);
	new_list->next = hashtable->table[hashkey];
	hashtable->table[hashkey] = new_list;
	return (0);
}

#include "ft_ls.h"

/*sort the linked list in last modified(t), descending(r) or size(S)*/
int			ft_sortList(t_dir_details *tmp, t_dir_details *node, char *s)
{
	if (ft_strchr(s, 'S'))
	{
		if (tmp->small_counter->status.st_size == node->small_counter->status.st_size)
		{
			return (ft_isSorted(tmp, node, s));
		}
		if (ft_strchr(s, 'r'))
		{
			return (tmp->small_counter->status.st_size > node->small_counter->status.st_size);
		}
		return (tmp->small_counter->status.st_size < node->small_counter->status.st_size);
	}
	else if (ft_strchr(s, 't'))
	{
		if (tmp->small_counter->status.st_mtime == node->small_counter->status.st_mtime)
		{
			return (ft_isSorted(tmp, node, s));
		}
		if (ft_strchr(s, 'r'))
		{
			return (tmp->small_counter->status.st_mtime > node->small_counter->status.st_mtime);
		}
		return (tmp->small_counter->status.st_mtime < node->small_counter->status.st_mtime);
	}
	else
	{
		return (ft_isSorted(tmp, node, s));
	}
}
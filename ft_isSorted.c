#include "ft_ls.h"

/*check if a node needs to be sorted*/
int			ft_isSorted(t_dir_details *tmp, t_dir_details *node, char *s)
{
	if (ft_strchr(s, 'r'))
	{
		return (ft_strcmp(tmp->small_counter->directory, node->small_counter->directory) < 0);
	}
	return (ft_strcmp(tmp->small_counter->directory, node->small_counter->directory) > 0);
}
#include "ft_ls.h"

/*add the node with information into the big container and sort the list*/
int			ft_addNode(t_dir_details **h_flag, t_dir_details *node, char *ls_flags)
{
	t_dir_details *tmp;

	if ((tmp = *h_flag) == 0 || ft_sortList(tmp, node, ls_flags) > 0)
	{
		*h_flag = node;
		node->next = tmp;
	}
	else
	{
		while (tmp)
		{
			if (tmp->next == 0)
			{
				tmp->next = node;
				break ;
			}
			else if (ft_sortList(tmp->next, node, ls_flags) > 0)
			{
				node->next = tmp->next;
				tmp->next = node;
				break ;
			}
			tmp = tmp->next;
		}
	}
	return (node->small_counter->status.st_blocks);
}

#include "ft_ls.h"

/*add an error node to the error linked list to be printed*/
void		ft_throw_NodeError(t_dir_details **h_flag, t_dir_details *node)
{
	t_dir_details *tmp;

	if ((tmp = *h_flag) == 0)
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
			tmp = tmp->next;
		}
	}
}
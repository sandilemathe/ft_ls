#include "ft_ls.h"

/*sort a linked list of folders by directory names*/
t_dir_details	*ft_sortByName(t_dir_details *h_flag)
{
	t_dir_details	*dir_tmp;
	t_details		*details_tmp;

	dir_tmp = h_flag;
	while (dir_tmp && dir_tmp->next)
	{
		if (ft_strcmp(dir_tmp->small_counter->directory, dir_tmp->next->small_counter->directory) > 0)
		{
			details_tmp = dir_tmp->next->small_counter;
			dir_tmp->next->small_counter = dir_tmp->small_counter;
			dir_tmp->small_counter = details_tmp;
			dir_tmp = h_flag;
		}
		else
		{
			dir_tmp = dir_tmp->next;
		}
	}
	return (h_flag);
}
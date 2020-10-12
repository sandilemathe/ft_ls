#include "ft_ls.h"

/*free a linked list*/
void		free_linkedList(t_dir_details *h_flag)
{
	t_dir_details *tmp;

	while (h_flag)
	{
		tmp = h_flag->next;
		if (h_flag->small_counter->directory)
		{
			ft_strdel(&h_flag->small_counter->directory);
		}
		if (h_flag->small_counter->dir_path)
		{
			ft_strdel(&h_flag->small_counter->dir_path);
		}
		if (h_flag->small_counter->main_path)
		{
			ft_strdel(&h_flag->small_counter->main_path);
		}
		if (h_flag->small_counter->time)
		{
			ft_strdel(&h_flag->small_counter->time);
		}
		if (h_flag->small_counter->rwx)
		{
			ft_strdel(&h_flag->small_counter->rwx);
		}
		free(h_flag->small_counter);
		free(h_flag);
		h_flag = 0;
		h_flag = tmp;
	}
}
#include "ft_ls.h"

/*check if node is a file or directory and print print its properties*/
void		ft_validateNode(t_dir_details *h_flag, char *ft_lsFlags)
{
	t_dir_details	*tmp;
	t_file		*small_counter;

	tmp = h_flag;
	small_counter = (t_file *)malloc(sizeof(t_file));
	while (tmp)
	{
		if (S_ISDIR(tmp->small_counter->status.st_mode))
		{
			ft_printPath(tmp, ft_lsFlags, 0);
		}
		else
		{
			small_counter->size = ft_getSize(h_flag, ft_lsFlags);
			small_counter->user = ft_get_userLength(h_flag, ft_lsFlags);
			small_counter->group = ft_get_groupLength(h_flag, ft_lsFlags);
			small_counter->link = ft_get_linkSize(h_flag, ft_lsFlags);
			ft_printDir(tmp, ft_lsFlags, small_counter);
		}
		tmp = tmp->next;
	}
	free(small_counter);
}
#include "ft_ls.h"

/*handle getting length of file size, group, usera and link*/  
void	ft_getSizes(t_dir_details *h_flag, t_dir_details *tmp2, char *ft_lsFlags)
{
	t_file *tmp;

	tmp = (t_file *)malloc(sizeof(t_file));
	tmp->size = ft_getSize(h_flag, ft_lsFlags);
	tmp->user = ft_get_userLength(h_flag, ft_lsFlags);
	tmp->group = ft_get_groupLength(h_flag, ft_lsFlags);
	tmp->link = ft_get_linkSize(h_flag, ft_lsFlags);
	while (tmp2)
	{
		if ((ft_strchr(ft_lsFlags, 'a') && tmp2->small_counter->directory[0] == '.') ||
				tmp2->small_counter->directory[0] != '.')
		{	
			ft_printDir(tmp2, ft_lsFlags, tmp);
		}
		tmp2 = tmp2->next;
	}
	free(tmp);
}
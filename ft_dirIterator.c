#include "ft_ls.h"

/*loop through directory to print its contents depending on the provided flags*/
void		ft_dirIterator(t_dir_details *h_flag, char *ft_lsFlags)
{
	t_dir_details *tmp;

	tmp = h_flag;
	while (tmp)
	{
		if (S_ISDIR(tmp->small_counter->status.st_mode) && !ft_currentDir(tmp))
		{
			if (ft_strchr(ft_lsFlags, 'a') || tmp->small_counter->directory[0] != '.')
			{
				ft_printPath(tmp, ft_lsFlags, 0);
			}
		}
		tmp = tmp->next;
	}
}
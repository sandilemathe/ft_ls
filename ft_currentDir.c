#include "ft_ls.h"

/*check for if a directory is a .(root folder) or ..(sub-directory)*/
int			ft_currentDir(t_dir_details *h_flag)
{
	if (ft_strcmp(h_flag->small_counter->directory, ".") == 0
		|| ft_strcmp(h_flag->small_counter->directory, "..") == 0)
	{
		return (1);
	}
	return (0);
}
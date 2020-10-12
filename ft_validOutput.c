#include "ft_ls.h"

/*start print/list all the correct dir/files to console*/
void		ft_validOutput(t_dir_details *h_flag, char *ft_lsFlags, int totalNodes)
{
	t_dir_details	*tmp2;

	tmp2 = h_flag;
	if (ft_strcmp(h_flag->small_counter->main_path, ".") && ft_strchr(ft_lsFlags, 'R'))
	{
		write(1, "\n./", 3);
		ft_putstr(h_flag->small_counter->main_path);
		write(1, ":\n", 2);
	}
	if (ft_strchr(ft_lsFlags, 'l') && tmp2->next->next != 0)
	{
		ft_putstr("total ");
		ft_putendl(ft_itoa(totalNodes));
	}
	ft_getSizes(h_flag, tmp2, ft_lsFlags);
}
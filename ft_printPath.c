#include "ft_ls.h"

/*check if directory is accessible and initialise the listing process or an error message*/
void		ft_printPath(t_dir_details *h_flag, char *l, int t)
{
	t_dir_details		*valid;
	t_dir_details		*invalid;

	valid = 0;
	invalid = 0;
	if ((h_flag->small_counter->dir_inf = opendir(h_flag->small_counter->dir_path)) == 0)
	{
		write(1, "\n", 1);
		ft_putstr(h_flag->small_counter->dir_path);
		ft_putendl(":\nft_ls: Access denied");
	}
	t = ft_validate_sub_dir(h_flag, l, &valid, &invalid);
	valid == 0 ? 0 : ft_validOutput(valid, l, t);
	invalid == 0 ? 0 : ft_throwError(invalid);
	if (ft_strchr(l, 'R') && valid != 0)
	{
		ft_dirIterator(valid, l);
	}
	free(invalid);
	free_linkedList(valid);
}
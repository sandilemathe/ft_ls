#include "ft_ls.h"

/*print error message on files/folders that doesn't exists*/
void		ft_throwError(t_dir_details *invalid)
{
	t_dir_details *tmp;

	tmp = invalid;
	while (tmp)
	{
		ft_putstr("ft_ls: ");
		ft_putstr(tmp->small_counter->directory);
		ft_putendl(": File/Directory does not exist");
		tmp = tmp->next;
	}
	return ;
}
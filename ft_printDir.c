#include "ft_ls.h"

/*print for long listing and also links*/
void		ft_printDir(t_dir_details *h_flag, char *ft_lsFlags, t_file *small_counter)
{
	char *link;

	if (ft_strchr(ft_lsFlags, 'l'))
	{
		ft_printProperties(h_flag, small_counter);
	}
	ft_putstr(h_flag->small_counter->directory);
	if (ft_strchr(ft_lsFlags, 'l') && S_ISLNK(h_flag->small_counter->status.st_mode))
	{
		link = ft_strnew(255);
		readlink(h_flag->small_counter->dir_path, link, 255);
		ft_putstr(" -> ");
		ft_putstr(link);
		ft_strdel(&link);
	}
	write(1, "\n", 1);
}
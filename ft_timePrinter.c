#include "ft_ls.h"

/*print folder/file's last modified time*/
void		ft_timePrinter(t_dir_details *h_flag)
{
	char	**tmp;
	int		len_size;

	len_size = -1;
	tmp = 0;
	if ((time(0) - (h_flag->small_counter->status.st_mtime)) > 15548400 ||
			(h_flag->small_counter->status.st_mtime) > (time(0)))
	{
		tmp = ft_strsplit(ctime(&h_flag->small_counter->status.st_mtime), ' ');
		ft_putstr(tmp[1]);
		write(1, "  ", 2);
		ft_putstr(tmp[2]);
		write(1, "  ", 2);
		ft_putstr(ft_strtrim(tmp[4]));
		write(1, " ", 1);
		while (tmp[++len_size] != 0)
		{
			ft_strdel(&tmp[len_size]);
		}
		free(tmp);
	}
	else
	{
		ft_putstr(h_flag->small_counter->time);
		write(1, " ", 1);
	}
}
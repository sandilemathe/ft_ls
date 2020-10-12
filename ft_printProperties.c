#include "ft_ls.h"

/*print file/folder properties for l flag*/
void		ft_printProperties(t_dir_details *h_flag, t_file *s_counter)
{
	ft_putstr(h_flag->small_counter->rwx);
	write(1, "  ", 2);
	ft_addPadding(h_flag->small_counter->status.st_nlink, 0, s_counter->link);
	ft_putstr(ft_itoa(h_flag->small_counter->status.st_nlink));
	write(1, "  ", 2);
	ft_addPadding(0, h_flag->small_counter->u_inf->pw_name, s_counter->user);
	ft_putstr(h_flag->small_counter->u_inf->pw_name);
	write(1, "  ", 2);
	ft_addPadding(0, h_flag->small_counter->g_inf->gr_name, s_counter->group);
	ft_putstr(h_flag->small_counter->g_inf->gr_name);
	write(1, "  ", 2);
	ft_addPadding(h_flag->small_counter->status.st_size, 0, s_counter->size);
	ft_putstr(ft_itoa(h_flag->small_counter->status.st_size));
	write(1, " ", 1);
	ft_timePrinter(h_flag);
}
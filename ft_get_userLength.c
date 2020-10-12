#include "ft_ls.h"

/*get length of user*/
int		ft_get_userLength(t_dir_details *h_flag, char *ft_lsFlags)
{
	t_dir_details	*tmp;
	int			len_size;
	int			length;

	len_size = 0;
	tmp = h_flag;
	while (tmp)
	{
		if (ft_strchr(ft_lsFlags, 'a') || tmp->small_counter->directory[0] != '.')
		{
			if ((length = (int)ft_strlen(tmp->small_counter->u_inf->pw_name)) > len_size)
			{
				len_size = length;
			}
		}
		tmp = tmp->next;
	}
	return (len_size);
}
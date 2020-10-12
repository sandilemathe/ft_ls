#include "ft_ls.h"

/*get length of size*/
int		ft_getSize(t_dir_details *h_flag, char *ft_lsFlags)
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
			if ((length = ft_paddingSize(tmp->small_counter->status.st_size)) > len_size)
			{
				len_size = length;
			}
		}
		tmp = tmp->next;
	}
	return (len_size);
}
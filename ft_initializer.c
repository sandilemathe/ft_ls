#include "ft_ls.h"

/*initializes the head of the linked list that contains file names and flags*/
t_counterType		*ft_initializer(t_counterType *flag_counter)
{
	flag_counter->ls_flags = ft_strnew(7);
	flag_counter->l_counterType = 0;
	return (flag_counter);
}
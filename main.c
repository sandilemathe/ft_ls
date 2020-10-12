#include "ft_ls.h"

/*main entry of ls*/
int		main(int argc, char **argv)
{
	int		index;
	t_counterType	*flag_counter;

	flag_counter = (t_counterType *)malloc(sizeof(t_counterType));
	flag_counter = ft_initializer(flag_counter);
	index = ft_inputFlags(&flag_counter->ls_flags, argv);
	flag_counter->l_counterType = ft_getPath(&argv[index], flag_counter->ls_flags, argc - index);
	ft_validateNode(flag_counter->l_counterType, flag_counter->ls_flags);
	free(flag_counter->ls_flags);
	free_linkedList(flag_counter->l_counterType);
	free(flag_counter);
	return (0);
}

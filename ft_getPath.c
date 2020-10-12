#include "ft_ls.h"

/*get items to list, folders and files*/
t_dir_details	*ft_getPath(char **argv, char *l, int argc)
{
	struct stat	details;
	int			index;
	t_dir_details	*valid;
	t_dir_details	*invalid;

	valid = 0;
	invalid = 0;
	index = -1;
	while (argv[++index])
	{
		if (lstat(argv[index], &details) == 0)
		{
			ft_addNode(&valid, ft_createNode(details, argv[index], argv[index], 0), l);
		}
		else
		{
			ft_addNode(&invalid, ft_createNode(details, argv[index], argv[index], 0), l);
		}
	}
	if (argc == 0)
	{
		if (lstat(".", &details) != -1)
		{
			ft_addNode(&valid, ft_createNode(details, ".", ".", 0), l);
		}
	}
	ft_throwError(ft_sortByName(invalid));
	free(invalid);
	return (valid);
}
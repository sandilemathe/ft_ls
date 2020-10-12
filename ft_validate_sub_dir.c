#include "ft_ls.h"

/*validate files in sub directories and add the to list of correct or incorrect list*/
int			ft_validate_sub_dir(t_dir_details *h_flag, char *l, t_dir_details **c, t_dir_details **i)
{
	int				totalNodes;
	char			*path;
	struct dirent	*dir;
	struct stat		details;

	totalNodes = 0;
	while (h_flag->small_counter->dir_inf != 0 && (dir = readdir(h_flag->small_counter->dir_inf)) != 0)
	{
		path = ft_path(h_flag->small_counter->dir_path, dir->d_name);
		if (lstat (path, &details) == -1)
		{
			ft_throw_NodeError(i, ft_createNode(details, dir->d_name, path,
						h_flag->small_counter->dir_path));
		}
		else
		{
			totalNodes += ft_addNode(c, ft_createNode(details, dir->d_name, path,
						h_flag->small_counter->dir_path), l);
		}
	}
	free(path);
	return (totalNodes);
}
#include "ft_ls.h"

/*create a file's absolute path*/ 
char		*ft_path(char *dir_path, char *directory)
{
	char *new_path;
	char *tmp;

	tmp = ft_strjoin(dir_path, "/");
	new_path = ft_strjoin(tmp, directory);
	ft_strdel(&tmp);
	return (new_path);
}
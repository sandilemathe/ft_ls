#include "ft_ls.h"

/*create a node and add the file information*/ 
t_dir_details	*ft_createNode(struct stat details, char *directory, char *dir_path,
		char *main_path)
{
	t_dir_details		*node;

	if (!(node = (t_dir_details*)malloc(sizeof(t_dir_details))))
	{
		ft_putstr("Memory allocation failure");
	}
	if (!(node->small_counter = (t_details*)malloc(sizeof(t_details))))
	{
		ft_putstr("Memory allocation failure");
	}
	node->small_counter->directory = ft_strdup(directory);
	node->small_counter->status = details;
	if (dir_path)
	{
		node->small_counter->dir_path = ft_strdup(directory);
		node = ft_permissions(node);
	}
	else
		node->small_counter->dir_path = NULL;
	if (main_path)
		node->small_counter->main_path = ft_strdup(main_path);
	else
		node->small_counter->main_path = NULL;
	node->next = 0;
	return (node);
}
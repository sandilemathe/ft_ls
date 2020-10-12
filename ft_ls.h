#ifndef FT_LS_H
# define FT_LS_H

# include <string.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>
# include <errno.h>
# include <sys/stat.h>
# include <sys/dir.h>
# include "libft/libft.h"
# define FLAGS "alrRSt"

typedef struct			s_file
{
	int					size;
	int					user;
	int					group;
	int					link;
}						t_file;

typedef struct			s_info
{
	char				*directory;
	char				*dir_path;
	char				*main_path;
	char				*time;
	char				*rwx;
	DIR					*dir_inf;
	struct stat			status;
	struct passwd		*u_inf;
	struct group		*g_inf;
}						t_details;

typedef struct			s_dir_details
{
	t_details				*small_counter;
	struct s_dir_details	*next;
}						t_dir_details;

typedef	struct			s_counter
{
	char				*ls_flags;
	t_dir_details			*l_counterType;
}						t_counterType;

char					*ft_path(char *dir_path, char *directory);
int						ft_get_groupLength(t_dir_details *head, char *ls_flags);
int						ft_get_linkSize(t_dir_details *head, char *ls_flags);
int						ft_getSize(t_dir_details *head, char *ls_flags);
int						ft_get_userLength(t_dir_details *head, char *ls_flags);
int						ft_inputFlags(char **ls_flags, char **av);
int						ft_currentDir(t_dir_details *head);
int						ft_isSorted(t_dir_details *temp, t_dir_details *list,
		char *str);
int						ft_validate_sub_dir(t_dir_details *head, char *l, t_dir_details **c,
		t_dir_details **i);
int						ft_paddingSize(int n);
int						ft_addNode(t_dir_details **head, t_dir_details *list, char
		*ls_flags);
int						ft_sortList(t_dir_details *temp, t_dir_details *list, char *str);
char					*ft_flagChecker(char *av, char *str, int j);
t_dir_details				*ft_getPath(char **av, char *l, int ac);
t_dir_details				*ft_createNode(struct stat details, char *dir_name, char
		*dir_path, char *main_path);
t_dir_details				*ft_permissions(t_dir_details *l);
t_dir_details				*ft_sortByName(t_dir_details *head);
t_counterType					*ft_initializer(t_counterType *big_cont);
void					ft_throw_NodeError(t_dir_details **head, t_dir_details *list);
void					ft_getSizes(t_dir_details *head, t_dir_details *temp2, char *ls_flags);
void					ft_validOutput(t_dir_details *head, char *ls_flags, int total);
void					ft_printPath(t_dir_details *head, char *ls_flags, int total);
void					ft_throwError(t_dir_details *incor);
void					free_linkedList(t_dir_details *head);
void					ft_dirIterator(t_dir_details *head, char *ls_flags);
void					ft_addPadding(int n, char *s, int long_name);
void					ft_validateNode(t_dir_details *head, char *ls_flags);
void					ft_printDir(t_dir_details *head, char *ls_flags, t_file *small_cont);
void					ft_printProperties(t_dir_details *head, t_file *small_cont);
void					ft_timePrinter(t_dir_details *head);

#endif
#include "ft_ls.h"

/*collect information about a file/folder*/
t_dir_details	*ft_permissions(t_dir_details *l)
{
	l->small_counter->rwx = ft_strnew(10);
	l->small_counter->rwx[0] = '-';
	l->small_counter->rwx[0] = (S_ISDIR(l->small_counter->status.st_mode)) ? 'd' : l->small_counter->rwx[0];
	l->small_counter->rwx[0] = (S_ISFIFO(l->small_counter->status.st_mode)) ? 'p' : l->small_counter->rwx[0];
	l->small_counter->rwx[0] = (S_ISCHR(l->small_counter->status.st_mode)) ? 'c' : l->small_counter->rwx[0];
	l->small_counter->rwx[0] = (S_ISBLK(l->small_counter->status.st_mode)) ? 'b' : l->small_counter->rwx[0];
	l->small_counter->rwx[0] = (S_ISSOCK(l->small_counter->status.st_mode)) ? 's' : l->small_counter->rwx[0];
	l->small_counter->rwx[0] = (S_ISLNK(l->small_counter->status.st_mode)) ? 'l' : l->small_counter->rwx[0];
	l->small_counter->rwx[1] = l->small_counter->status.st_mode & S_IRUSR ? 'r' : '-';
	l->small_counter->rwx[2] = l->small_counter->status.st_mode & S_IWUSR ? 'w' : '-';
	l->small_counter->rwx[3] = l->small_counter->status.st_mode & S_IXUSR ? 'x' : '-';
	l->small_counter->rwx[4] = l->small_counter->status.st_mode & S_IRGRP ? 'r' : '-';
	l->small_counter->rwx[5] = l->small_counter->status.st_mode & S_IWGRP ? 'w' : '-';
	l->small_counter->rwx[6] = l->small_counter->status.st_mode & S_IXGRP ? 'x' : '-';
	l->small_counter->rwx[7] = l->small_counter->status.st_mode & S_IROTH ? 'r' : '-';
	l->small_counter->rwx[8] = l->small_counter->status.st_mode & S_IWOTH ? 'w' : '-';
	l->small_counter->rwx[9] = l->small_counter->status.st_mode & S_IXOTH ? 'x' : '-';
	l->small_counter->time = ft_strsub(ctime(&l->small_counter->status.st_mtime), 4, 12);
	l->small_counter->g_inf = getgrgid(l->small_counter->status.st_gid);
	l->small_counter->u_inf = getpwuid(l->small_counter->status.st_uid);
	return (l);
}
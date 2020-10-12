#include "ft_ls.h"

/*get the length of an int for padding, 
aligns files in an orderly manner*/
int			ft_paddingSize(int length)
{
	int len_size;

	len_size = 0;
	if (length == 0)
	{
		return (1);
	}
	while (length)
	{
		length = length / 10;
		len_size++;
	}
	return (len_size);
}
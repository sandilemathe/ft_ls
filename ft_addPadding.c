#include "ft_ls.h"

/*add padding to format the display*/
void		ft_addPadding(int len_size, char *s, int long_name)
{
	int length;

	length = len_size == 0 ? 1 : 0;
	if (s == 0)
	{
		while (len_size)
		{
			len_size = len_size / 10;
			length++;
		}
	}
	else
	{
		length = (int)ft_strlen(s);
	}
	while (length < long_name)
	{
		ft_putchar(' ');
		length++;
	}
}
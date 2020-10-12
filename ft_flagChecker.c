#include "ft_ls.h"

/*check if a flag is handled, print error message if it is not handled*/
char		*ft_flagChecker(char *argv, char *s, int i)
{
	s[0] = '-';
	while (argv[++i])
	{
		if (!(ft_strchr(FLAGS, argv[i])))
		{
            ft_putstr("ft_ls: please insert valid ft_ls flag  -- ");
			ft_putchar(argv[i]);
			ft_putstr("\nusage: ft_ls [-");
			ft_putstr(FLAGS);
			ft_putendl("] [file ...]");
			exit(0);
		}
		else
		{
			s[i] = argv[i];
		}
	}
	s[i] = '\0';
	return (s);
}
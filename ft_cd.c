#include "ft_minishell.h"

int		ft_cd(int ac, char **av)
{
	if (ac == 2)
	{
		int ret = chdir(av[1]);
		char buff[2000];
		getcwd(buff, 2000);
		printf("$>$s\n", buff);
		if (ret = -1)
		{
			printf("ERRNO: %d\n", errno);
			printf("ERROR: |%s|\n", strerror(errno));
		}
	}
	return (0);
}
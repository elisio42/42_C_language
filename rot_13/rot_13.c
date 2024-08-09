#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] > 'm')
				str[i] -= 13;
			else
				str[i] += 13;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] > 'M')
				str[i] -= 13;
			else
				str[i] += 13;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		rot_13(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

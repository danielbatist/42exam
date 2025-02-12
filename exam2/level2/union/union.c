#include <unistd.h>

void    ft_union(char *str1, char *str2)
{

		int     i;
		int     ascii[256] = {0};
    i = 0;
    while(str1[i])
    {
            if (ascii[(unsigned char)str1[i]] == 0)
            {
                    write(1, &str1[i], 1);
                    ascii[(unsigned char)str1[i]] = 1;
            }
            i++;
    }
    i = 0;
    while(str2[i])
    {
            if (ascii[(unsigned char)str2[i]] == 0)
            {
                    write(1, &str2[i], 1);
                    ascii[(unsigned char)str2[i]] = 1;
            }
            i++;
    }
}

int     main(int argc, char ** argv)
{

		if (argc == 3)
				ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
		return (0);
}


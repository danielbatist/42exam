#include <unistd.h>

void    wdmatch(char *str1, char *str2)
{
		int     i;
		int     j;
    
    i = 0;
    j = 0;
    while (str2[j])
    {
            if (str1[i] == str2[j])
                    i++;
            j++;
    }
    if (str1[i] == '\\0')
    {
            i = 0;
            while (str1[i])
            {
                    write(1, &str1[i], 1);
                    i++;
            }
    }    
}

int     main(int argc, char **argv)
{
		if (argc == 3)
				wdmatch(argv[1], argv[2]);
		write(1, "\n", 1);
		return (0);
}


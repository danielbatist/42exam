#include <unistd.h>
#include <stdarg.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int num)
{
	unsigned int	num_long;
	int		count;

	count = 0;
	if (num < 0)
	{
		count += ft_putchar('-');
		num_long = num * -1;
	}
	else
		num_long = num;
	if (num_long >= 10)
		count += ft_putnbr(num_long / 10);
	count += ft_putchar((num_long % 10) + '0');
	return (count);
}

int	ft_putnbr_hex(unsigned int num)
{
	int	count;

	count = 0;
	if (num > 15)
		count += ft_putnbr_hex(num / 16);
	count += ft_putchar("0123456789abcdef"[num % 16]);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd')
				count += ft_putnbr(va_arg(args, int));
			else if (format[i] == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (format[i] == 'x')
				count += ft_putnbr_hex(va_arg(args, unsigned int));
		}
		else
		{
			write(1, &format[i], 1);
			count += 1;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	ft_printf("teste str: %s\n", "toto");
	ft_printf("Magic %s is %d\n", "number", 42);
	ft_printf("hexadecimal for %d is %x\n", 42, 42);
	return (0);
}

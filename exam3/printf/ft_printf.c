#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
int	ft_putstr(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}
int	ft_putnbr(int nb)
{
	unsigned int	num_long;
	int	count;

	num_long = 0;
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		num_long = nb * -1;
	}
	else
		num_long = nb;
	if (num_long >= 10)
		count += ft_putnbr(num_long / 10);
	count += ft_putchar(num_long % 10 + '0');
	return (count);
}

int	ft_putnbr_hex(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 15)
		count += ft_putnbr_hex(nb / 16);
	count += ft_putchar("0123456789abcdef"[nb % 16]);
	return (count);
}
int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;
	va_list	args;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if(format[i] == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (format[i] == 'd')
				count += ft_putnbr(va_arg(args, int));
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
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	i = ft_printf("%s", "toto");
	printf("\nout : %i\n", i);
	i = ft_printf("Magic %s is %d", "number", 42);
	printf("\nout : \n%i\n", i);
	i = ft_printf("Hexadecimal for %d is %x", 42, 42);
	printf("\ncount x: \n%i\n", i);
	return (0);
}

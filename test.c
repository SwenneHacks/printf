#include "printf.h"

int		main(void)
{
	unsigned int	i = -7;
	char			c = 'c';
	char			*s = "Hi";

	ft_putstr("______________ DONE: \n\n");
		printf(			"%%d 		|%d|\n", i);
	ft_printf(			"%%d 		|%d|\n", i);
	ft_putchar('\n');
		printf(			"%%05d 		|%05d|\n", i);
	ft_printf(			"%%05d 		|%05d|\n", i);
	ft_putchar('\n');
		printf(			"%%5d 		|%5d|\n", i);
	ft_printf(			"%%5d 		|%5d|\n", i);
	ft_putchar('\n');
		printf(			"%%i 		|%i|\n", i);
	ft_printf(			"%%i 		|%i|\n", i);
		printf(			"%%.1d		|%.1d|\n", i);
	ft_printf(			"%%.1d		|%.1d|\n", i);
	ft_putchar('\n');
		printf(			"%%0.5d		|%0.5d|\n", i);
	ft_printf(			"%%0.5d		|%0.5d|\n", i);
	ft_putchar('\n');
		printf(			"%%.1d		|%.1d|\n", 555);
	ft_printf(			"%%.1d		|%.1d|\n", 555);
	ft_putchar('\n');
		printf(			"%%5.1d		|%5.1d|\n", i);
	ft_printf(			"%%5.1d		|%5.1d|\n", i);
	ft_putchar('\n');
		printf(			"%%c 		|%c|\n", c);
	ft_printf(			"%%c 		|%c|\n", c);
	ft_putchar('\n');
		printf(			"%%*c,4		|%*c|\n", 4, c);
	ft_printf(			"%%*c,4		|%*c|\n", 4, c);
	ft_putchar('\n');
		printf(			"%%-4c 		|%-4c|\n", c);
	ft_printf(			"%%-4c 		|%-4c|\n", c);
	ft_putchar('\n');
		printf(			"%%5s 		|%5s|\n", s);
	ft_printf(			"%%5s 		|%5s|\n", s);
	ft_putchar('\n');
		printf(			"%%-5s 		|%-5s|\n", s);
	ft_printf(			"%%-5s 		|%-5s|\n", s);
	ft_putchar('\n');
		printf(			"%%.2s		|%.2s|\n", "Hello");
	ft_printf(			"%%.2s		|%.2s|\n", "Hello");
	ft_putchar('\n');
		printf(			"%%*.*s		|%*.*s|\n", 6, 4, "Hello");
	ft_printf(			"%%*.*s		|%*.*s|\n", 6, 4, "Hello");
	ft_putchar('\n');
		printf(			"%%6.4s		|%6.4s|\n", "Hello");
	ft_printf(			"%%6.4s		|%6.4s|\n", "Hello");
	ft_putchar('\n');
		printf(			"%%*s,6		|%*s|\n", 6, "Hello");
	ft_printf(			"%%*s,6		|%*s|\n", 6, "Hello");
	ft_putchar('\n');
		printf(		"%%.*s,2		|%.*s|\n", 2, "Hello");
	ft_printf(		"%%.*s,2 		|%.*s|\n", 2, "Hello");
	ft_putchar('\n');
		printf(		"%%-6.4s 		|%-6.4s|\n", "Hello");
	ft_printf(		"%%-6.4s		|%-6.4s|\n", "Hello");
	ft_putchar('\n');
		printf(			"%%p 		|%p|\n", &c);
	ft_printf(			"%%p 		|%p|\n", &c);
	ft_putchar('\n');
		printf(			"%%x		|%x|\n", 555);
	ft_printf(			"%%x		|%x|\n", 555);
	ft_putchar('\n');
		printf(			"%%X 		|%X|\n", 555);
	ft_printf(			"%%X 		|%X|\n", 555);
	ft_putchar('\n');
		printf(			"%%u 		|%u|\n", 555);
	ft_printf(			"%%u 		|%u|\n", 555);
	ft_putchar('\n');
		printf(			"%%o 		|%o|\n", 555);
	ft_printf(			"%%o 		|%o|\n", 555);
	ft_putchar('\n');
	ft_putstr("______________ TO FIX: \n");
	ft_putchar('\n');
		printf(		"%% d 		|% d|\n", i);
	ft_printf(		"%% d 		|% d|\n", i);
	ft_putchar('\n');
		printf(		"%%u 		|%u|\n", -7);
	ft_printf(		"%%u 		|%u|\n", -7);
	ft_putchar('\n');
	return (0);
}

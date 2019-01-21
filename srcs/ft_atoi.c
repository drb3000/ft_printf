#include "ft_printf.h"

int		ft_atoi(const char *s)
{
	long	n;
	int		np;

	np = 1;
	n = 0;
	while (*s == '\t' || *s == ' ' || *s == '\n' ||
			*s == '\r' || *s == '\v' || *s == '\f')
		++s;
	*s == '-' ? np = -1 : 0;
	*s == '-' || *s == '+' ? ++s : 0;
	while (*s >= '0' && *s <= '9')
	{
		n *= 10;
		n += *s - 48;
		++s;
	}
	return ((int)n * np);
}
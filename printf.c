#include "main.h"

/**
 * _priintf - a function that produces output according to a format.
 * @format: 1
 * @...: 2
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int const ;
	va_list args;

	if (*format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		format++;
	}
	return (0);
}

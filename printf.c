#include "main.h"

/**
 * _printf - Produces output according to a format.
 *
 * @format: Input character string.
 *
 * Return: The number of characters printed(excluding
 * the null byte ending the strings).
 */
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen((char *)format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	va_end(args);

	return (size);
}

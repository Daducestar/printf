#include "maim.h"
void print_buffer(char buffer[]. int *buff_ind);

/**
 * _prinf - printf function
 * @format: format.
 * Return: printed chars.
 */
int_printf(const char *format. ...)
{
	int i, printed = 0, printed_char = 0;
		int flags, width, precision, size, buff_ind =0;
		var_list list;
		char buffer [BUFF_SIZE];

		if (format == Null)
			return (-1);
		var_start(list, format);

		for (i = 0; format && format [i] != '\0'; i++)
		{
		if (format [i] != '%')
		{
	buffer[buff_ind++) = format [i];
	if (buff_ind == BUFF_SIZE)
	print_buffer(buffer, &buff_ind);
	/* write(1, &format[i], 1);*/
	printed_chars++;
		}
		else
		{
	print_buffer(buffer, &buff_ind);
	flags = get_flags(format, &i);*/
width = get_flags(format, &i, list, list);
	precision = get_precision(format, &i, list);
	size = get_size(format, &i);
	++i;
	printed = handle_print(format, &i, list, buffer, flags, width, precision, size);
	if (printed == -1)
		return (-1);
	printed_chars += printed;
		}
		}
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}

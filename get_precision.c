#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> 69cb04f7c30632e4cf54e96e8058314ac12fb4ff
/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments. (ImeGits and Soldiamond Alx Team Project)
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
        int curr_i = *i + 1;
        int precision = -1;
<<<<<<< HEAD

        if (format[curr_i] != '.')
                return (precision);

        precision = 0;
        for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
        {
=======
        if (format[curr_i] != '.')
                return (precision);
        
        precision = 0;
        for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
     
                {
>>>>>>> 69cb04f7c30632e4cf54e96e8058314ac12fb4ff
                if (is_digit(format[curr_i]))
                {
                        precision *= 10;
                        precision += format[curr_i] - '0';
                }
                else if (format[curr_i] == '*')
                {
                        curr_i++;
                        precision = va_arg(list, int);
                        break;
                }
                else
                        break;
<<<<<<< HEAD
	}
        *i = curr_i - 1;
=======
        
                }
                *i = curr_i - 1;
>>>>>>> 69cb04f7c30632e4cf54e96e8058314ac12fb4ff

        return (precision);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings separated by a given separator
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * @...: Variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 * If a string is NULL, "(nil)" is printed instead.
 * A new line is printed at the end of the function.
 */
void print_strings(const char *separator, const unsigned int n, ...) {
va_list strings;
unsigned int index;
char *str;

    va_start(strings, n);

for (index = 0; index < n; ++index) {
str = va_arg(strings, char*);
if (str == NULL) {
printf("(nil)");
} else {
printf("%s", str);
}

if (index != (n - 1) && separator != NULL) {
printf("%s", separator);
}
}

printf("\n");
va_end(strings);
}

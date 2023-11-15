/**
 * _printf - function used
 * @format: number to be printed according to the case
 * @...: variadic function variables declaration
 * Return: x
 */
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
va_list my_args;
int a, b, y, e, f, x;
int num = 0, len = 0;
char *s;

a = va_arg(my_args, int);
b = a % 10;
f = a / 10;
e = 1;
x = 1;

va_start(my_args, format);
if (format == NULL)
return (-1);
while (*format != '\0')
{
if (*format == '%')
{
switch (*++format)
{
case 's':
s = va_arg(my_args, char*);
while (s[len] != '\0') 
len++;                   
write(1, s, len);
num += len;
break;
case 'd' || 'i':
if (a < 0)
{
write(1, "-", 1);
f = -f;
a = -a;
b = -b;
x++;
}
if (f > 0)
{
while (f / 10 != 0)
{
e = e * 10;
f++;
}
f = a;
while (e > 0)
{
y = f / e;
write(1, (&y + '0'), 1);
f = f - ((y)*(e));
e = e / 10;
x++;
}
}
write(1, (&b + '0'), 1);
}
}
else
{
write(1, format, 1);
num++;
}
format++;
}
va_end(my_args);
return (x);
}

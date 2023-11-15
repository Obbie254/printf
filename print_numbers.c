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
va_list nums;
int a, b, y, e, f, x;
a = va_arg(nums, int);
b = a % 10;
f = a / 10;
e = 1;
x = 1;

va_start(nums, format);
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
va_end(nums);
return (x);
}

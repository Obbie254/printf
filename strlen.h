/**
 * str_len: function used
 * @s: constant character
 * @len: length of the string
 * Return: len
 */
int str_len(const char *s)
{
size_t len = 0;				
while (*s != '\0')
{
len++;
s++;
}
                    
return (len);
}

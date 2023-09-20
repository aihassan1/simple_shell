#include "main.h"
/**
* _strcopy - Copies a string from a source to a dest.
* @_dest: The copied string.
* @_source: The string you want to copy
*
* Return: A pointer to the copied string `dest`.
*/

char *_strcopy(char *_dest, const char *_source)
{
int i = 0;

if (_dest == NULL || _source == NULL)
{
return (_dest);
}

while (_source[i] != '\0')
{
_dest [i] = _source[i];
i++;
}
_dest[i] = '\0';

return (_dest);

}

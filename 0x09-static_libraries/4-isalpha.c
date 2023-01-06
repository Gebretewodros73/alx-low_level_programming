#include "main.h"
/**
 *_isalpha - checks for lowercase
*@t: The character to be checked
* Return: 1 for lowrcase character or 0 for anything else
*/
int _isalpha(int t)
{
	if ((t >= 65 && t <= 90) || (t >= 97 && t <= 122))
	{
		return (1);
	}
	return (0);
}

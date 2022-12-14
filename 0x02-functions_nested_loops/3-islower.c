#include "main.h"
/**
 *_islower - checks for lowercase
*@t: The character to be checked
* Return: 1 for lowrcase character or 0 for anything else
*/
int _islower(int t)
{
	if (t >= 97 && t <= 122)
	{
		return (1);
	}
	return (0);
}

/**
 * _memcpy - copies memory area
 * @dest: memory stored
 * @scr: memory copied
 * @n number of bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *scr, unsigned int n)
{
	int r = 0;
	int i = n;
	for (; r < i; r++)
	{
		dest[r] = scr[r];
		n--;
	}
	return (dest);
}

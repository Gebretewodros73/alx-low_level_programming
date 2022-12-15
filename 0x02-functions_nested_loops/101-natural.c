#include<stdio.h>
/**
 * main - display multiple of 3 and 5
 * Return: return zero
 */
int main(void)
{
	int i, j, msthree, msfive, ms, mthree[342], mfive[205];

	msthree = 0;
	msfive = 0;
	ms = 0;

	for (i = 1; i <= 341; i++)
	{
		mthree[i] = i * 3;
		msthree = msthree + mthree[i];
	}
	for (j = 1; j <= 204; j++)
	{
		mfive[j] = j * 5;
		if (mfive[j] % 3 == 0)
		{
			mfive[j] = 0;
		}
		msfive = msfive + mfive[j];
	}
	ms = msthree + msfive;
	printf("%d\n", ms);
	return (0);
}

#include "main.h"
/**
 * print_remaining_day -take a date and print how many day are
 * left in the year takinf leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: yeaar
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0 ) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day ++
		}
		printf ("Day of the year: %d\n", day);
		printf("Remaing day: %d\n", 366 -day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaning days: %d\n", 365 - day);
		}
	}
}

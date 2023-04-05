#include <stdio.h>
#include <math.h>

void convertDays(int days) {
	int years = floor(days / 365);
	int weeks = round(days % 365) / 7;
	days = days - (years * 365 + weeks * 7);
	printf("years %d\n", years);
	printf("weeks %d\n", weeks);
	printf("days %d\n", days);


}

int main()
{
	convertDays(372);
}
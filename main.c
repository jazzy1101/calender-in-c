#include <stdio.h>
#include <string.h>

const char* month[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
int main()
{
	int input, year;
	printf("Type a month and year of the calender you wish to check using number key\n");
	scanf("%d ,%d", &input, &year);
			
	printf("----------------- \n");
	printf("    %s  %d   \n", month[input - 1], year);
	printf("----------------- \n");
	printf("  M T W T F S S	 \n");
	
	return 0;
}

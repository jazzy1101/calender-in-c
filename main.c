#include <stdio.h>
enum { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main()
{
	int month, year;
	printf("Type a month and year of the calender you wish to check using number key");
	scanf("%d,%d", month, year);
	switch (month)
	{
	  case 1: 
		month = "JAN";
		break;
	  case 2:
		month = "FEB";
		break;
	  case 3:
		month = "MAR";
		break;
	  case 4:
		month = "APR";
		break;
	  case 5:
		month = "MAY";
		break;
	  case 6:
		month = "JUN";
		break;
	  case 7:
		month = "JUL";
		break;
	  case 8:
		month = "AUG";
		break;
	  case 9:
		month = "SEP";
		break;
	  case 10:
		month = "OCT";
		break;
	  case 11:
		month = "NOV";
		break;
	  case 12:
		month = "DEC";
		break;
	  default:
		printf("Please enter a number from 1 to 12");
	}	
	printf("----------------- \n");
	printf("  %d  %d  \n", month, year);
	printf("----------------- \n");
	
	
	return 0;
}

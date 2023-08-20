#include <stdio.h>
#include <ctype.h>

/**
 * converting from farhenrit to celsius
 **/

int main(void)
{
	char type;
	double temp;

	printf("what temp do you want to convert: (F) or (C): \n");
	scanf("%c" &type);

	type = toupper(type);

	if (temp == "F")
	{
		printf("enter "temp" in fahrenheit \n");
		scanf("%F" &temp);//takes user input
		temp = (temp - 32)*5/9;
		printf("this is your result: %lfC\n", temp);
	}
	else if (temp == "C")
	{
		printf("enter "temp" in Celsius \n");
                scanf("%C" &temp);// takes user input
                temp = (temp - 32)*5/9;
                printf("this is your result: %lfC\n", temp);
	}
	else
	{
		printf("Entera valid conversion type\n\a");
	}
}



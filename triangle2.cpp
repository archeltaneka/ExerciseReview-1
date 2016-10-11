#include <stdio.h>

int main(){
	
	// print welcome message
	printf("--Triangle-- \n");
	
	// draw the pattern
	int columnSpaces;
	int rowSpaces;
	int dotsIncrement;
	int dots = 1;
	
	for(columnSpaces = 1; columnSpaces <= 5; columnSpaces++)
	{
		for(rowSpaces = 4; rowSpaces >= columnSpaces; rowSpaces--)
		{
			printf(" ");
		}
		for(dotsIncrement = 0; dotsIncrement < dots; dotsIncrement++)
		{
			printf("*");
		}
		printf("\n");
		dots = dots + 2;
	}
	
}

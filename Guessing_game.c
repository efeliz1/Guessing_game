// Guessing_game.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include<stdio.h>

int main()
{
	//low = lowest number input
	// high = highest number input 
	//middle = middle between low + high
	//
	int low, high, middle, search_space;


	puts("Welcome to the Guessing game\n");

	printf("Please enter the low bound \n");
	scanf("%i", &low);

	printf("Please enter the high bound \n");
	scanf("%i", &high);

	printf("Your low is %d and your high %d \n", low, high);

	int counter = 0;
	search_space = high - low;
	printf("%i", search_space);
	/*while (low < high)
	{
		//cut search space by half
		search_space = high - low;

		//increment the counter
		counter = counter + 1; 
	}
	printf("I would guess your number in %d question: ", counter);
	*/

	//counter = 1;

	char answer;
	while (low <= high)
	{
		middle = (high + low) / 2;

		printf("Please enter e if your number is equal to %d \n", middle);
		printf("Please enter s if your number is smaller to %d \n", middle);
		printf("Please enter g if your number is greater to %d \n", middle);
		scanf(" %c", &answer);

		if (answer == 'e' || answer == 'E')
		{
			low = high + 1;
			printf("Finish \n");
		}

		else
		{
			if (answer == 's' || answer == 'S')
			{
				high = middle - 1;
			}
			else
			{
				low = middle + 1;
			}
		}
	}

}

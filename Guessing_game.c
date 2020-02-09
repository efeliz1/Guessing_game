// Guessing_game.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include<stdio.h>

int main(void)
{
	//low = lowest number input
	// high = highest number input 
	//middle = middle between low + high
	int low, high, middle,counter,search_space;
	char answer;


	puts("Welcome to the Guessing game\n");

	printf("\nPlease enter the low bound number: ");
	scanf("%i", &low);

	printf("\nPlease enter the high bound number: ");
	scanf("%i", &high);

	printf("Your low is %d and your high %d \n", low, high);

	int num_low = low;
	int num_high = high;


	counter = 0;
	 while(num_low< num_high)
	{
		//cut search space by half
		search_space= (num_high + num_low) / 2;

		num_low = search_space + 1;
		

	 	//increment the counter
	 	counter = counter + 1; 
	}
	printf("\nI would guess your number in %d question\n", counter);
	

	counter = 0;

	while (low <= high)
	{
		middle = (high + low) / 2;

		printf("\nQuestion %d \n", counter);

		printf("Please enter e if your number is equal to %d \n", middle);
		printf("Please enter s if your number is smaller to %d \n", middle);
		printf("Please enter g if your number is greater to %d \n",  middle);
		scanf(" %c", &answer);

		

		if (answer == 'e')
		{	// E = correct answer
			printf("\nCorrect \n");
		}

		else
		{
			if (answer == 's') // S = smaller number
			{
				high = search_space - 1;
			}
			if (answer == 'g')
			{
				low = search_space + 1;
			}
		}

		counter = counter + 1;
	}

}

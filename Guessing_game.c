// Guessing_game.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include<stdio.h>

int main(void)
{
	//low = lowest number input
	// high = highest number input 
	//middle = middle between low + high
	int low, high, middle, search_space,counter;
	char answer;


	puts("Welcome to the Guessing game\n");

	printf("\nPlease enter the low bound number: ");
	scanf("%i", &low);

	printf("\nPlease enter the high bound number: ");
	scanf("%i", &high);

	printf("Your low is %d and your high %d \n", low, high);



	// int counter = 0;
	
	// while(low< high)
	// {
	// 	//cut search space by half
	// 	middle = (high + low) / 2;
	// 	low =middle + 1;
		

	// 	//increment the counter
	// 	counter = counter + 1; 
	// }
	// printf("\nI would guess your number in %d question\n", counter);
	

	// counter = 0;

	while (low <= high)
	{
		middle = (high + low) / 2;

		printf("Please enter e if your number is equal to %d \n", middle);
		printf("Please enter s if your number is smaller to %d \n", middle);
		printf("Please enter g if your number is greater to %d \n", middle);
		scanf(" %c", &answer);

		if (answer == 'e') // E = correct number
		{
			printf("\nCorrect \n");
		}

		else
		{
			if (answer == 's') // S = smaller number
			{
				high = middle - 1;
			}
			if (answer == 'g')
			{
				low = middle + 1;
			}
		}
		if(low == middle || low == high)
		{
			printf("You're cheating");
		}
		counter = counter + 1;
	}

}

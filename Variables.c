#include <stdio.h>

int main() {
	int x;			// Declaration
	x = 123;		// Initalization
	int y = 456;	// Declaration + Initalization

	int score = 96;				// Integer
	float correct = 92.39;		// Floating Point Number
	char grade = 'A';			// Single Character
	char name[] = "XarCraft";	// Array Of Characters

	printf("Hello, %s!\n", name);
	printf("Your Exam Score is %d.\n", score);
	printf("Your Average Grade is %c.\n", grade);
	printf("You got %f%% of Your Questions Correct.\n\n", correct);
	puts("Thanks For Running This Program!\nMade by XarCraft!");
}
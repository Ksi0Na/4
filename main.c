#include "Functions.c"

int main()
{
	printf("\nWelcome!\n");

	void* form = malloc(2);
	form = 0;

	questions(form);

	free(form);
	return 0;
}
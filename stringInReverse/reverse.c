#include <stdio.h>

void reverse_string(const char name[]) {
	printf("What is your name?\n");

	scanf_s("%s", name);

	printf("%s", name);
}

int main()
{
	reverse_string("William");
}
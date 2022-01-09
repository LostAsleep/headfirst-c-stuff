#include <stdio.h>

void fortune_cookie(char msg[])
{
	printf("Message reads: %s\n", msg);
	// Array variables  are like pointers, so if we use sizeof
	// we get the size of the pointer returned.
	printf("msg occupies %lu bytes\n", sizeof(msg));
}

int main()
{
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);
	return 0;
}	

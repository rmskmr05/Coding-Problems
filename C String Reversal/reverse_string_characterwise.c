/*
	This program test a string reversal with "reverse_string" function
	it take a string and its lenght as argument and reverses it characterwise
*/

#include<stdio.h>
int get_str_len(char* str)
{
	int str_len = 0;
	char* str_ptr = str;
	while (*str_ptr != 0)
	{
		str_len++;
		str_ptr++;
	}	
	return str_len;
}

void reverse_string(char* str, int str_len)
{
	char tmp_char;
	for (int i = 0; i < (str_len / 2); i++)
	{	
		tmp_char = str[i];
		str[i] = str[str_len - i - 1];
		str[str_len - i - 1] = tmp_char;
	}
}

int main()
{
	char str[] = "Ramesh Kumar Verma";
	int len = get_str_len(str);

	printf("Original String: %s\n", str);

	printf("Length of the String: %d\n", len);

	//Reverse the string
	reverse_string(str, len);

	printf("Reversed String: %s", str);

	return 0;
}
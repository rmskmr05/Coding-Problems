/*
	This function tests a string reversal with unchanging the words with "reverse_word_oder".
	It takes a character string and its length as argument and reverses the word order.
	Note: Here input string is strictly without extra/additional spaces.
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

void reverse_word_order(char *str, int len)
{
	char rw[len];					// Store the wordwise reverse string
	int l = len-1, wl = 0, i = 0, j, k = 0;
	while (l > 0){
		while(str[l] != ' ' && l >= 0){
			wl++; 	// count the world length
			//printf("%c", str[l]);
			l--;	// Move Backward
		}
		//printf("\t%d\t", wl);
		for (j = l + 1; j < (l + wl + 1); j++){
			rw[k++] = str[j];		// Collect the word
		}
		wl = 0;		// reset the world length

		if (k < len)
			rw[k++] = ' ';

		l--;		// Move Back from Space position
	}

	// assign the reverse string to original String
	for (i = 0; i < len; i++){
		str[i] = rw[i];
	}
}

int main()
{
	char str[] = "Ramesh Kumar Verma";
	int str_len = get_str_len(str);

	printf("\nOriginal String: %s\n", str);

	printf("Length of the String: %d\n", str_len);

	//Reverse the string wordwise
	reverse_word_order(str, str_len);

	printf("\nReverse String: %s", str);

	return 0;
}
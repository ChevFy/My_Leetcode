#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool	isPalindrome(char *s)
{
	int		len;
	int		right;
	int		left;
	bool	is_equal;

	len = strlen(s);
	right = 1;
	left = 0;
	for (int i = 0; i < (int)(len / 2); i++)
	{
		is_equal = false;
		while (i + left < len && !isalnum((unsigned char)s[i + left]))
			left++;

		while (len - i - right >= 0 && !isalnum((unsigned char)s[len - i - right]))
			right++;
		// printf("i = %d, left = %d, right = %d\n", i, left, right);
		// printf(" %c , %c \n", s[i + left], s[len - i - right]);
		if (tolower(s[i + left]) == tolower(s[len - i - right]))
		{
			// printf(" %c , %c \n", s[i + right], s[len - i - left]);
			is_equal = true;
		}
		
		if(!is_equal)
			return false;
	}
	return true;
}

int main()
{
	char str[] = "A man, a plan, a canal: Panama";
	printf("%d\n", isPalindrome(str));
	return 0;
}
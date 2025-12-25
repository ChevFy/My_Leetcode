#include <stdio.h>

int	romanToInt(char *s)
{
	int sum = 0;
	while(*s != '\0')
	{
		if (*s == 'M')
			sum+=1000;
		else if (*s == 'D')
			sum+=500;
		else if (*s == 'C')
			sum+=100;
		else if (*s == 'L')
			sum+=50;
		else if (*s == 'X')
			sum+=10;
		else if (*s == 'V')
			sum+= 5;
		else if (*s == 'I')
			sum+= 1;
		s++;
	}
	return sum;
}

// int	main(void)
// {
// 	char test[10] = "XXI";
// 	printf("%d",romanToInt(&test));
// }
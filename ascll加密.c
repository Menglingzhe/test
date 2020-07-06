/*µÚÆßÕÂ²âÊÔascll¼ÓÃÜ³ÌĞò*/
#include<stdio.h>
#define adjust 7.31
int main(void)
{
	long num;
	char ch;
	int status;
	int n = 1;

	printf("please input");
	
	while((ch = getchar()) != '\n')
	{
		if (ch == ' ')
			putchar(ch);
		else
			putchar(ch + 1);
	}
	getchar(ch);


	return 0;

} 
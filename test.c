/*将千米转化成米*/
#include<stdio.h>
int main(void)
{
	int meter,km;

	km = 2;
	meter = 1000 * km;
	printf("这里把 %d 千米转换为米\n",km);
	printf("%d千米等于%d米\n",km, meter);

	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 1, w = 0, e = 0, r = 0;
	scanf("%d", &w);
	for (q = 1; q <= w; q++)
	{
		if (q % 2)
		{
			e++;
		}
		else
		{
			r++;
		}
	}
	printf("%d %d\n", e, r);
	return 0;
}
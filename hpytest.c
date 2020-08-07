#include <stdio.h>
#include <stdlib.h>
#include "jemalloc.h"

void * a[1000000];
int main()
{
	for (int i = 1; i <= 100000; i++)
	{
		a[i] = yesmalloc(10000);
	}
	printf("%lld\n", (unsigned long long)a);
	
	for (int i = 1; i <= 100000; i++) yesfree(a[i]);

	return 0;
}

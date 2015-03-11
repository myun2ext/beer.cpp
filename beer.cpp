#include <stdio.h>
#include "factory.h"

int main()
{
	beer_factory f;
	for(int i=0; i<=10; i++)
		printf("beer!! [%p]\n", f.brew());
	return 0;
}

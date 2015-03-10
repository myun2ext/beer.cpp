#include <stdio.h>
#include "beer.h"
#include "factory.h"

int main()
{
	beer_factory f;
	for(int i; i<=10; i++) {
		beer b = f.brew();
		printf("beer!!\n");
	}
	return 0;
}

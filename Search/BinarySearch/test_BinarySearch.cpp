#include <stdio.h>
#include "LBinarySearch.h"


int main()
{
	int buff[] = {8,11,19,23,27,33,45,55,67,98};
	printf("target position : %d \n",binarySearch(buff,sizeof(buff)/4,19));
	return 0;

}

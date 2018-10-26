#include <stdio.h>
#include "LBinarySearch.h"


int main()
{
	int buff[] = {1,3,4,5,6,8,8,8,11,18};
	printf("target position : %d \n",bxbinarySearch(buff,sizeof(buff)/4,8));
	return 0;

}

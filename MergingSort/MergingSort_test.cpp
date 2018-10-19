#include "LMergingSort.h"
#include <stdio.h>


int main()
{
	int buff[]={8,6,4,1,2,8,4,9,4,5};
	mergingSort(buff, (int)sizeof(buff)/4);
	for (int i = 0; i<sizeof(buff)/4; ++i) {
		printf("%d ",buff[i]);
	}
	printf("\n");

	return 0;
}

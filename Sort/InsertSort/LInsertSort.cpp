#include "LInsertSort.h"

void insertSort(int *data,int size)
{
	
	for (int i=1 ; i < size; i++) {
		int value = data[i];
		int y=i-1;
		for( ; y >= 0; --y ) {
			if (data[y] > value) {
				data[y+1]=data[y];
			}
			else {
				break;
			}
		}
		data[y+1]=value;
	}
}

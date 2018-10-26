#include "LBinarySearch.h"
#include <stdio.h>


int binarySearch(int *data, int size, int target)
{
	int head = 0;
	int tail = size;
	
	while (head<=tail) {
		int mid = head + (tail-head)/2;
	printf("%d\n",mid);	
		if (data[mid] == target) {
			return mid;
		}
		if (data[mid] < target) {
			head = mid+1;
		}
		else {
			tail = mid-1;
		}
	}
	return -1;
}

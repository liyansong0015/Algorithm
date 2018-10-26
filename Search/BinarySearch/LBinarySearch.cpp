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
int bxbinarySearch(int *data, int size, int target)
{
	int head = 0;
	int tail = size-1;
	while (head<=tail) {
		int mid = head+(tail-head)/2;
		if (data[mid] == target) {
			//left X right O
			if (mid >=1 && data[mid-1] != target && mid <=size-1 && data[mid+1] ==target) {
				return mid;
			}
			else {
				tail = mid -1;
				continue;
			}
		}
		if (data[mid] > target)
		tail = mid -1;
		else
		head = mid +1;
	}
	return -1;
}


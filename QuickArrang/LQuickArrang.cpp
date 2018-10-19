#include "LQuickArrang.h"

void quick_sort(int *data, int size)
{
	quick_sort_c(data,0,size-1);
}

void quick_sort_c(int *data, int head, int tail)
{
	if (head >= tail) {
		return;
	}
	int mid = partition(data, head, tail);
	quick_sort_c(data,head,mid-1);
	quick_sort_c(data,mid+1,tail);
}

int partition(int *data, int head, int tail)
{
	int pivot = data[tail];
	int i=head;
	for (int j=head;j < tail ; ++j) {
		if (data[j] < pivot) {
			int temp = data[i];
			data[i]=data[j];
			data[j]=temp;
			i++;
		}
	}
	int temp = data[i];
	data[i] = data[tail];
	data[tail] = temp;
	return i;
}

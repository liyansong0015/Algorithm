#include "LCountingSort.h"
#include <stdio.h>

void countingSort(int * data, int size)
{
	int max = data[0], min = data[0];
	//1.
	for (int i=1;i<size; ++i) {
		if (data[i]>max) {
			max=data[i];
		}
		if (data[i]<min) {
			min=data[i];
		}
	}
	//2.
	int *c=new int[max-min+1];
	for (int i=0; i<size; ++i) {
		c[data[i]-min] ++;
	}
	//3.
	for (int i=1;i<(max-min+1);++i) {
		c[i]+=c[i-1];
	}
	//4.
	int * r=new int[size];
	for (int i=size-1; i>=0; --i) {
		r[c[data[i]-min]-1]=data[i];
		c[data[i]-min]--;
	}
	//5.
	for (int i=0; i<size; ++i) {
		data[i]=r[i];
	}
	delete r;
	delete c;
}

#include "LMergingSort.h"

void mergingSort(int *data,int size)
{
	int *temp = new int[size]; 
	merging(data,0,size-1,temp);
	delete temp;
}

void merging(int *data,int head,int tal,int * temp)
{
	
	if (head<tal) {
		int mid = (head + tal)/2;
		merging(data,head,mid,temp);
		merging(data,mid+1,tal,temp);
		mergingArray(data,head,mid,tal,temp);
	}
}

void mergingArray(int *data, int head, int mid, int tal,int *temp)
{
	
	int i=head;
	int j=mid+1;
	int t=0;
	while(i<=mid && j<=tal)	{
		if (data[i] > data[j])	{
			temp[t++]=data[j++];
		}
		else {
			temp[t++]=data[i++];
		}
	}
	while (i<= mid) {
		temp[t++]=data[i++];
	}
	while (j <= tal) {
		temp[t++]=data[j++];
	}
	for (i=0; i < t; i++) {
		data[head+i]=temp[i];
	}
}

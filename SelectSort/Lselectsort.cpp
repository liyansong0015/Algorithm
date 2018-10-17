#include"Lselectsort.h"

void selectSort(int *data,int size)
{
	for (int i=0 ;i<size;++i) {
		int min = data[i];
		int minNum = i;
		for (int y=i;y<size;y++)
		{
			if (data[y] < min)
			{
				min=data[y];
				minNum = y;
			}
		}
		data[minNum]=data[i];
		data[i]=min;
	}
}

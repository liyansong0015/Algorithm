#include "Lbubble.h"

void bubble(int *data,int size)
{
	for (int i=0; i < size-1; ++i) {
		for (int y=0; y <= size-1; ++y) {
			if (data[y] < data[y-1]) {
				int temp = data[y-1];
				data[y-1] = data[y];
				data[y] = temp;
			}
		}
	}
}

g++ Lbubble.cpp bubble_test.cpp

冒泡排序只会操作相邻的两个数据。每次冒泡操作都会对相邻的两个元素进行比较，看是否满足大小关系要求，
如果不满足就让它俩互换。
稳定性：冒泡排序是稳定的排序算法。
空间复杂度：冒泡排序是原地排序算法。
时间复杂度：
1. 最好情况（满有序度）：O(n)。
2. 最坏情况（满逆序度）：O(n^2)。
3. 平均情况：
“有序度”和“逆序度”：
对于一个不完全有序的数组，如4，5，6，3，2，1，有序元素对为3个（4，5），
（4，6），（5，6），有序度为3，逆序度为12；
对于一个完全有序的数组，如1，2，3，4，5，6，有序度就是n*(n-1)/2，也就是15，称作满有序度；
逆序度=满有序度-有序度；
冒泡排序、插入排序交换（或移动）次数=逆序度。
最好情况下初始有序度为n*(n-1)/2，最坏情况下初始有序度为0，则平均初始有序度为n*(n-1)/4，
即交换次数为n*(n-1)/4，因交换次数<比较次数<最坏情况时间复杂度，所以平均时间复杂度为O(n^2)。


//Merge Sort

#include<stdio.h>

#define n 4

int list[n+1]={4,3,2,1},result[n+1]={0};

void MergeLists(int list[],int start1,int end1,int start2,int end2)
{
	int finalStart=start1,finalEnd=end2,indexC=1;
	
	while((start1<=end1) && (start2<=end2))
	{
		if(list[start1]<list[start2])
		{
			result[indexC]=list[start1];
			start1++;
		}
		else
		{
			result[indexC]=list[start2];
			start2++;	
		}
		indexC++;
	}
	if(start1<=end1)
		for(int i=start1;i<=end1;i++)
		{
			result[indexC]=list[i];
			indexC++;
		}
	else
		for(int i=start2;i<=end2;i++)
		{
			result[indexC]=list[i];
			indexC++;
		}
	indexC=1;
	for(int i=finalStart;i<=finalEnd;i++)
	{
		list[i]=result[indexC];
		indexC++;
	}
}

void MergeSort(int list[],int first,int last)
{
	int middle;
	if(first<last)
	{
		middle=(first+last)/2;
		MergeSort(list,first,middle);
		MergeSort(list,middle+1,last);
		MergeLists(list,first,middle,middle+1,last);
	}
}

int main()
{
	MergeSort(list,0,3);
	
	for(int i=0;i<n;i++)
		printf("%d ",list[i]);
	
	return 0;
}


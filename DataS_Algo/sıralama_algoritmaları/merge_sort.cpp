//Merge Sort

#include<stdio.h>

#define n 9

int D[n+1]={7,3,5,8,2,9,4,15,6},M[n+1]={0},x=0;

void birlestir(int D[],int sol, int k, int sag)
{
	int i,j;
	printf("");
	for(i=sol,j=k+1;i<=k && j<=sag;)
		if(D[i]<D[j])
		{
			M[x]=D[i];
			x++;
			i++;
		}
		else
		{
			M[x]=D[j];
			x++;			
			j++;
		}
}

void birlesmeli(int D[],int sol,int sag)
{
	int k;
	if(sol<sag)
	{
		k=(sol+sag)/2;
		birlesmeli(D,sol,k);
		birlesmeli(D,k+1,sag);
		birlestir(D,sol,k,sag);
	}
}

int main()
{
	birlesmeli(D,0,8);
	
	for(int i=0;i<n;i++)
		printf("%d ",M[i]);
	
	return 0;
}


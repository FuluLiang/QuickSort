// sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
//#include "MyList.h"
//#incldue <>
using namespace std;

int size = 8;

void exchage(int &a,int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int PartiTion(int *a,int p,int r)
{
	int x = a[r];
	int i = p-1;
	for(int j = p;j<=r-1;j++)
	{
		if(a[j] < x)
		{
			i++;
			exchage(a[i],a[j]);
		}
	}
	exchage(a[i+1],a[r]);
	return i+1;
}

void QuickSort(int *a, int p,int r)
{
	if(p<r)
	{
		int q = PartiTion(a,p,r);
		QuickSort(a,p,q-1);
		QuickSort(a,q+1,r);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[8] = {2,8,7,1,3,5,6,10};
	
	for(int i = 0;i<size;i++)
		cout<<a[i]<<" ";
	
	QuickSort(a,0,size-1);
	
	cout<<endl;
	for(int i = 0;i<size;i++)
		cout<<a[i]<<" ";
	return 0;
}


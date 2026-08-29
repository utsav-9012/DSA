#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=8;
int arr[8]={1,2,0,4,3,0,5,0};
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			for(int j=i;j<n-1;j++)
			{
				arr[j]=arr[j+1];
			}
			arr[n-1]=0;
		}
	}
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}

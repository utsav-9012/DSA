#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	int arr[n+1];
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Initial array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl<<"Enter the element want to insert: "<<endl;
	int element;
	cin>>element;
	
	cout<<"Enter the index: "<<endl;
	int index;
	cin>>index;
	
	for(int i=n-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	
		cout<<"Final array: "<<endl;
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}

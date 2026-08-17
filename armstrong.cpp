#include<iostream>
using namespace std;
int main()
{
	int num=153;
	int num1=153;
	int sum=0;
	
	while(num)
	{
		int rem=num%10;
		int cube = rem*rem*rem;
		sum=cube+sum;
		num=num/10;
	}
	if (sum==num1)
	{
		cout<<"Armstrong";
	}
	return 0;
}
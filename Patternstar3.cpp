//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int i=1;i<=4;i++)
//	{
//		for(int j=1;j<=4-i;j++)
//		{
//			cout<<" ";
//		}
//		for(int k=1;k<=2*i-1;k++)
//		{
//			cout<<"*";	
//		}
//		cout<<endl;
//	}
//}

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

#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x)
{
	int no=sqrt(n);
	int index=0;
	
	for(int i=0;i<n;i+=no)
	{
		if(arr[i]<=x)
		index=i;
		else
		break;
	}
	
	for(int i=index;i<n;i++)
	{
		if(arr[i]==x)
		return i;
	}
}

int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	int x;
	
	cin >> x;
	
	int pos=search(arr,n,x);
	
	cout << pos ;
}

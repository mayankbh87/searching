#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int l,int r,int x)
{
	if(l<r)
	{
    int mid=l+(r-l)/2;
    
    if(arr[mid]==x)
    return mid;
    
   
        if(x<arr[mid])
        search(arr,0,mid,x);
        
        if(x>arr[mid])
        search(arr,mid+1,r,x);
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
    
    
    
    int l=0,r=n-1;
    
    int pos=search(arr,l,r,x);
    
    cout << pos;
}

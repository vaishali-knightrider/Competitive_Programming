/*
Q: 
Given a sorted array and a target elem,
find index of target in arr, if target is
not present return -1
*/

#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[] ,int n,int target)
{
	int l,h,mid;
	l=0;
	h=n-1;

	while(l<=h)
	{
		mid = l+(h-l)/2;

		if(arr[mid]==target)
			return mid;

		else if(arr[mid]<target)
			l=mid+1;

		else
			h=mid-1;
	}
	return -1;
}

int main()
{
	int n, target;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
    cin>>target;
    
	int ans = binary_search(arr,n,target);
	cout<<"ans : "<<ans<<"\n";
	return 0;
}
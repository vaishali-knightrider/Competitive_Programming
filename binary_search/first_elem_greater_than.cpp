/*
Q: 
Given an array and a target elem,
find an element which is just greater than the target,if its not possible
return -1
*/

#include<bits/stdc++.h>
using namespace std;

int firstElementGreaterThan(int arr[] ,int n,int target)
{
	int l,h,mid;
	l=0;
	h=n-1;

	while(l<h)
	{
		mid = l+(h-l)/2;

		if(arr[mid]>target)
			h=mid;

		else if(arr[mid]<target)
			l=mid+1;
	}
	
	//final check
	if(arr[l]> target)
	{
		return l;
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
    
	int ans = firstElementGreaterThan(arr,n,target);
	cout<<"ans : "<<ans<<"\n";
	return 0;
}
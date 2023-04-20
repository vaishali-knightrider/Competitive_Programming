/*
Q. Given an array, find frequency of element in it.
If elem is not present return 0
T = O(logn) , S = O(1)
*/

#include<bits/stdc++.h>
using namespace std;


int firstOccurrence(int arr[] ,int n,int target)
{
	int l,h,mid;
	l=0;
	h=n-1;

	while(l<h)
	{
		mid = l+(h-l)/2;

		if(arr[mid]==target)
			h=mid;

		else if(arr[mid]<target)
			l=mid+1;

        else{
			h=mid-1;
		}
	}
	//for the final check when (l==h)

	if(arr[l]==target)
		return l;
	return -1;

}
int lastOccurrence(int arr[] ,int n,int target)
{
	int l,h,mid;
	l=0;
	h=n-1;

	while(l<h)
	{
		mid = l+(h-l+1)/2;

		if(arr[mid]==target)
			l=mid;

		else if(arr[mid]<target)
			l=mid+1;

        else{
			h=mid-1;
		}
	}
	//for the final check when (l==h)

	if(arr[l]==target)
		return l;
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

	int last = lastOccurrence(arr,n,target);
	int first = firstOccurrence(arr,n,target);

	cout<<"ans : "<< last - first +1 <<"\n";
	return 0;
}

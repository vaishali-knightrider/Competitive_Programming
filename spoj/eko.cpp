#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sumOfWoods(int arr[],int n,int mid);

int maximumIntegerHeight(int arr[],int n, ll m)
{
	int l=0;
	int h=1000000;
	while(l<h)
	{
		int mid=l+(h-l+1)/2;

		if(sumOfWoods(arr, n, mid)>=m)
			l=mid;
		else
			h=mid-1;
	}
	//final check
	if(sumOfWoods(arr, n, l)>=m)
		return l;
	return -1;

}

ll sumOfWoods(int arr[],int n,int mid)
{
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>mid){
          sum+=arr[i]-mid;
		}
	}
	return sum;
}

int main()
{
	int n;
	ll m;
	cin>>n>>m;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr,arr+n);
	int res = maximumIntegerHeight(arr, n, m);
	cout<<res<<"\n";
	return 0;
}

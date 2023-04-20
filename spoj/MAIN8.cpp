#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sumOfChocos(int arr[],int n,ll mid);

ll findTotalCandy(int arr[],int n,ll k)
{
	ll l=0, h=1000000000, mid;
	while(l<h)
	{
		mid=l+(h-l+1)/2;
		
	    if(sumOfChocos(arr, n, mid)>=k)
			l=mid;
		else
			h=mid-1;
	}
	//final check
	if(sumOfChocos(arr, n, l)>=k)
		return l;
	return 0;
}

ll sumOfChocos(int arr[],int n,ll mid)
{
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=mid)
		{
			if(mid != 0)
          		sum += arr[i]/mid;
		}
	}
	return sum;
}
	
int main()
{
	int n,t, res;
	ll k;
	cin>>t;
	while(t--)
	{
	   cin>>n>>k;

	   int arr[n];

	   for(int i=0;i<n;i++)
	      cin>>arr[i];

      res = findTotalCandy(arr, n, k);
	  cout<<res<<"\n";
	}
	return 0;
}

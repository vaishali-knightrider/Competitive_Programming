#include<bits/stdc++.h>
using namespace std;

int hackRandom(int arr[],int n,int k)
{
	int i,j,ans=0;
	i=0;
	j=i+1;
	while(i<n && j<n)
	{
		int diff= arr[j]-arr[i];
		if(diff==k){
			ans++;
			i++;
		}

		else if(diff<k)
			j++;
		else
			i++;
	}
	return ans;
}

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}
	sort(arr,arr+n);
	int res = hackRandom(arr,n,k);
	cout<<res<<"\n";
	return 0;

}
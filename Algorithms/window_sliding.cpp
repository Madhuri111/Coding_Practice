#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int window(int arr[],int n,int k)
{
	if(n<k)
	{
		printf("Invalid \n");
	}
	int max_sum=0;
	for(int i=0;i<k;i++)
	{
		max_sum+=arr[i];
	}
	int cur=max_sum;
	for(int i=k;i<n;i++)
	{
		cur += arr[i]-arr[i-k];
		max_sum=max(max_sum,cur);
	}
	return max_sum;

}


int main()
{
	int n,k;
	printf("Please enter values of n and k below\n");
	//scanf("%d",&n);
	//scanf("%d",&k);
	
	cin >> n;
	cin >> k;

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >>arr[i];
	}
	printf("%d\n",window(arr,n,k));
}


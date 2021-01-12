#include<stdio.h>
void merge(int *a,int l,int r)
{
	int middle=(l+r)/2;
	int fine=((r+1)-l)/2;
	int a1[fine],a2[fine];
	for(int i=l;i<=middle;i++)
	{
		a1[i-l]=a[i];
	}
	for(int i=middle+1;i<=r;i++)
	{
		a2[i-(middle+1)]=a[i];
	}
	int k1,k2=0;
	while(k1<fine && k2<fine)
	{
		if(a1[k1]<a2[k2])
		{
			a[l]=a1[k1];
			k1++;
		}
		else
		{
			a[l]=a2[k2];
			k2++;
		}
		l++;
	}
	if(k1==fine)
	{
		while(k2<fine)
		{
			a[l++]=a2[k2++];
		}
	}
	else
	{
		while(k1<fine)
		{
			a[l++]=a1[k1++];
		}
	}
}
void mergesort(int *a,int l,int r)
{
	if(l<r)
	{
		int middle=(l+r)/2;
		mergesort(a,l,middle);
		mergesort(a,middle+1,r);
		merge(a,l,r);
	}
}
int main()
{
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        mergesort(arr,0,n-1);
        for(int i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
        }
	printf("\n");
}

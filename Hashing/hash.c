#include<stdio.h>
#include<string.h>
int po[10000];
int main(){
	int q;
	scanf("%d",&q);
	po[0]=1;
	for(int i=1;i<1000;i++){
		po[i]=po[i-1]*29%101;
	}
	char arr[1000];
	int hash1[1000],hash2[1000];
	scanf("%s",arr);
	int n=strlen(arr);
	hash1[0]=arr[0]%101;
	for(int i=1;i<n;i++){
		hash1[i]=(hash1[i-1]*29+arr[i])%101;
	}
	hash2[n-1]=arr[n-1]%101;
	for(int i=n-2;i>=0;i--){
		hash2[i]=(hash2[i+1]*29+arr[i])%101;
	}
	for(int i=0;i<n;i++)
		printf("%d %d\n",hash1[i],hash2[n-i-1]);
	for(int i=0;i<q;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		int ans1,ans2;
		if(l>0){
			ans1=hash1[r]-(hash1[l-1]*po[r-l+1])%101;
		}
		else
			ans1=hash1[r];
		if(r<n-1){
			ans2=hash2[l]-(hash2[r+1]*po[r-l+1])%101;
		}
		else
			ans2=hash2[l];
		if(ans1==ans2){
			printf("YES");
		}
		else
			printf("NO");
	}
}

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	int left=0;int right=0;int sum=a[0];int ans=n+1;
	for(int i=0;i<n;i++)cin>>a[i];
	while(left<=right && right<n){
		if(sum<m){
			sum += a[++right];
		}
		else if(sum==n){
			int len = right-left+1;
			if(len<ans)ans=len;
			sum += a[++right];
		}
		else{
			int len = right-left+1;
			if(len<ans)ans=len;
			sum -= a[left++];
		}
	}
	if(ans>n)ans=0;
	cout<<ans<<endl;
}

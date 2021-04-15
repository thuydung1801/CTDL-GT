#include<bits/stdc++.h>
using namespace std;
	int main(){
		int n,a[1005],b[1005]={0},res=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			b[i]=1;
			for(int j=0;j<i;j++){
				if(a[i]>a[j]) b[i]=max(b[i],b[j]+1);
			}
			res=max(res,b[i]);
		}
		cout<<res<<endl;

		return 0;
	}


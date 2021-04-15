#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,sum=0;
			cin>>n;
			int a[n+1],b[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			if(a[0]>0) b[0]=a[0];
			else b[0]=0;
			for(int i=1;i<n;i++){
				if(b[i-1]>0) b[i]=a[i]+b[i-1];
				else b[i]=a[i];
				if(b[i]>sum) sum=b[i];
				else sum=sum;
			}
			cout<<sum<<endl;
		}


		return 0;
	}


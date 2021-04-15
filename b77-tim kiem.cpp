#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,k,d=0;
			cin>>n>>k;
			int a[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=0;i<n;i++){
				if(k==a[i]) d=1;
			}
			if(d==1) cout<<"1"<<endl;
			else cout<<"-1"<<endl;
		}


		return 0;
	}


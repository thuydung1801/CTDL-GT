#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t,n,k;
		cin>>t;
		while(t--){
			cin>>n>>k;
			int a[n+2],dem=0;
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			
			for(int i=0;i<n;i++){
				if(a[i]==k) dem++;
			}
			if(dem>0) cout<<dem<<endl;
			else cout<<"-1"<<endl;
		}


		return 0;
	}


#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t,n,m,k;
		cin>>t;
		while(t--){
			cin>>n>>k;
			int a[n+5],d;
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			
			for(int i=0;i<n;i++){
				if(a[i]==k) d=i+1;
			}
			cout<<d<<endl;
		}


		return 0;
	}


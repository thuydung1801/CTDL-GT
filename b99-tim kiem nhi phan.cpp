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
		//	sort(a,a+n);
			for(int i=0;i<n;i++){
				if(a[i]==k){
					cout<<i+1<<endl;
					d=1;
					break;
				}		
			}
			if(d==0) cout<<"NO"<<endl;
		}


		return 0;
	}


#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t,n,k;
		cin>>t;
		while(t--){
			cin>>n>>k;
			int a[n+2];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(a[i]<a[j]){
						int m=a[i];
						a[i]=a[j];
						a[j]=m;
					}
				}
			}
			for(int i=0;i<n;i++){
				if(i<k) cout<<a[i]<<" ";
			}
			cout<<endl;
		}


		return 0;
	}


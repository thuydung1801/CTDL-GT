#include<bits/stdc++.h>
using namespace std;
long long t,n;
	int main(){
		cin>>t;
		while(t--){
			cin>>n;
			int a[n+1],b[n];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=0;i<n-1;i++){
				cin>>b[i];
			}
			for(int i=0;i<n;i++){
				if(a[i]!=b[i]) {
					cout<<i+1;
					break;
				}
			}
			cout<<endl;
		}


		return 0;
	}


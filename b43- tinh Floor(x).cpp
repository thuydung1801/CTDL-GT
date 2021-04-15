#include<bits/stdc++.h>
using namespace std;
int n,x,t;
	int main(){
		cin>>t;
		while(t--){
			cin>>n>>x;
			int a[n+1],d,k=0;
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			sort(a,a+n);
			for(int i=0;i<n;i++){
				if(a[i]<=x) {
					k=1;
					d=i+1;
				}
			//	else k=1;
			}
			if(k==0) cout<<"-1"<<endl;
			else cout<<d<<endl;
		}


		return 0;
	}


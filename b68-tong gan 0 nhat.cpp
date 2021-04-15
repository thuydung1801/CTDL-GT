#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t,n,k;
		cin>>t;
		while(t--){
			cin>>n;
			int a[n+5],dem=0,b[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					b[dem++]=a[i]+a[j];
				}
			}
			
			int min=b[0];
			for(int i=0;i<dem;i++){
				if(abs(min)>abs(b[i])) min=b[i];
			}
			cout<<min<<endl;
		}


		return 0;
	}


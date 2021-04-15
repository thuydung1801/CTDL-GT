#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,k=0,dem=0;
			cin>>n;
			int a[n+1];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			sort(a,a+n);
			int min=a[0],max=a[n-1];
			while(min<max){
				for(int j=0;j<n;j++){
					if(a[j]==min) k=1;
				}
				
				if(k==0) dem++;	
				min++,k=0;
			}
			
			 cout<<dem<<endl;
		//	else cout<<"-1"<<endl;
		}


		return 0;
	}


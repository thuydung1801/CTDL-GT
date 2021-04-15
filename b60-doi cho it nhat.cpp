#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,dem=0;
			cin>>n;
			int a[n+2];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=0;i<n;i++){
				int max=a[i],vt=i;
				for(int j=n-1;j>i;j--){
					if(max>a[j]){
						max=a[j];
						vt=j;
					}
				}
				if(max<a[i]){
					dem++;
					int m=a[i];
					a[i]=a[vt];
					a[vt]=m;
					
				}
				
			}
			cout<<dem<<endl;
		}


		return 0;
	}


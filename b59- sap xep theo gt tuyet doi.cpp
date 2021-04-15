#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t,n,k;
		cin>>t;
		while(t--){
			cin>>n>>k;
			int a[n+5];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=1;i<n;i++){
				int tmp=abs(a[i]-k);
				int j=i-1;
				if(abs(a[j]-k)>tmp){
					int ltt=a[i];
					while(abs(a[j]-k)>tmp&&j>=0){
						a[j+1]=a[j];
						j--;
					}
					a[j+1]=ltt;
				}
			}
			for(int i=0;i<n;i++){
				 cout<<a[i]<<" ";
			}
			cout<<endl;
		}


		return 0;
	}


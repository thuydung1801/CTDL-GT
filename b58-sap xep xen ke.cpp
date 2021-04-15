#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n;
			cin>>n;
			int a[n+5];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			sort(a,a+n);
			int k=0,d=n-1,c[n+1],b[n+1];
			for(int i=0;i<=n;i++){
				if(i<n/2) b[i]=a[i];
				else c[i]=a[i];
			}
			for(int i=0;i<n;i++){
				if(i%2==0) {
					cout<<c[d]<<" ";
					d--;
				}
				else{
					cout<<b[k]<<" ";
					k++;
				}
			}
		cout<<endl;
			
			
		}


		return 0;
	}


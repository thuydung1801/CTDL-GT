#include<bits/stdc++.h>
using namespace std;
	int main(){
		int n,a[100],dem=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int j=1;j<=n;j++){
			int k=0;
			for(int i=1;i<=n-j;i++){
				if(a[i]>a[i+1]){
						k=1;
						int m=a[i];
						a[i]=a[i+1];
						a[i+1]=m;
					
				}
			}
			if (k==0) break;
			else {
			 		dem++;
					cout<<"Buoc "<<dem<<": ";
					for(int i=1;i<=n;i++){
						cout<<a[i]<<" ";
					}
					cout<<endl;
			}
		}
			
		return 0;
	}


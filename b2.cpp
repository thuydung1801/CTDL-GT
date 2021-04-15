#include<bits/stdc++.h>
using namespace std;

	int main(){
		int n,a[100],dem=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}	
		for(int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++ ){
				if(a[i]>a[j]){
					int m=a[i];
					a[i]=a[j];
					a[j]=m;
				}
			}
			dem++;
			cout<<"Buoc "<<dem<<": ";
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}


		return 0;
	}


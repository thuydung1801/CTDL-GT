#include<bits/stdc++.h>
using namespace std;
	int main(){
		int n,a[100],dem=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n-1;i++){
			int d=0,min=999;
			for(int j=i;j<=n;j++){
				if(a[j]<min){
					min=a[j];
					d=j;
				} 
			}
			int m=a[i];
			a[i]=a[d];
			a[d]=m;
			dem++;
			cout<<"Buoc "<<dem<<": ";
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}


		return 0;
	}


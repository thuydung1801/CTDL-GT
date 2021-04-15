#include<bits/stdc++.h>
using namespace std;
	int main(){
		int n,a[100],dem=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cout<<"Buoc 0: "<<a[1]<<endl;
		int m,j;
		for(int i=2;i<=n;i++){
			m=a[i];
			j=i-1;
			while(j>0&&a[j]>m){
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=m;
			dem++;
			cout<<"Buoc "<<dem<<": ";
			for(int k=1;k<=i;k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}


		return 0;
	}


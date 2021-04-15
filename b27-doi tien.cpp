#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n,dem=0;
			cin>>n;
			int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
			while(n!=0){
				int i=0;
				while((n/a[i+1])!=0&&i<9)
					i++;
				n-=a[i];
				dem++;
			}
			cout<<dem<<endl;
		}


		return 0;
	}


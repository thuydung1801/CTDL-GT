#include<bits/stdc++.h>
using namespace std;
void check(int n,int b[10000]){
	int k=0;
	while(n>0){
		b[k++]=n%10;
		n/=10;
	}
}
	int main(){
		int t;
		cin>>t;
		while(t--){
			int n;
			cin>>n;
			vector <int> b;
			b.clear();
			int a[n+2],k=0;
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			for(int i=0;i<n;i++){
				while(a[i]>0){
					int m=a[i]%10;
					b.push_back(m);
					k++;
					a[i]/=10;
				}	
			}
			sort(b.begin(),b.end());
			for(int i=0;i<k;i++){
				while(b[i]==b[i+1]) i++;
				cout<<b[i]<<" ";
			}
			cout<<endl;
		}


		return 0;
	}


#include<bits/stdc++.h>
using namespace std;
int n,k,ok=0,a[100];
	int main(){
		int t;
		cin>>t;
		while(t--){
			cin>>n>>k;
			int b[100],dem=0;
			for(int i=1;i<=k;i++){
				cin>>a[i];
				b[i]=a[i];
			}
			int i=k;
			while(b[i]==n-k+i) i--;
			if(i==0) cout<<k<<endl;
			else{
				b[i]++;
				for(int j=i+1;j<=k;j++)
					b[j]=b[j-1]+1;
				for(int j=1;j<=k;j++){
					for(int l=1;l<=k;l++)
						if(b[j]==a[l]) dem++;
				}
				cout<<k-dem<<endl;
			}
		}


		return 0;
	}


#include<bits/stdc++.h>
using namespace std;
int n,k,ok=0,a[100][100],x[100],b[100],sum=0;
vector <int> res;
void Try(int i){
	for(int j=1;j<=n;j++){
		if(b[j]){
			x[i]=j;
			b[j]=0;
			if(i==n){
				sum=0;
				for(int l=1;l<=n;l++){
					sum+=a[l][x[l]];
				}
				if(sum==k){
					for(int l=1;l<=n;l++)
						res.push_back(x[l]);
				}
			}
			else Try(i+1);
			b[j]=1;
		}
	}
}

	int main(){
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>a[i][j];
		for(int i=1;i<=n;i++)
			b[i]=1;
		Try(1);
		cout<<res.size()/n;
		for(int i=0;i<res.size();i++){
			if(i%n==0) cout<<endl;
			cout<<res[i]<<" ";
		}


		return 0;
	}


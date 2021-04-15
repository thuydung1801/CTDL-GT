#include<bits/stdc++.h>
using namespace std;
int a[100],n,b[100],k;
vector <vector <int> > X;
	void Try(int i){
		for(int j=0;j<=1;j++){
			a[i]=j;
			if(i==n){
				int sum=0;
				for(int i=1;i<=n;i++){
					if(a[i]){
						sum+=b[i];
					}
				}
				if(sum==k){
					vector <int> c;
					c.clear();
					for(int i=1;i<=n;i++){
						if(a[i]){
							c.push_back(b[i]);
						}
					}
					X.push_back(c);
				}	
			}
			else Try(i+1);
		}
	}
	int main(){
		int t;
		cin>>t;
		while(t--){
			X.clear();
			cin>>n>>k;
			for(int i=1;i<=n;i++){
				cin>>b[i];
			}
			sort(b+1,b+n+1);
			Try(1);
		//	sort(X.begin(),X.end());
			if(X.size()==0) cout<<"-1";
			else{
				for(int i=0;i<X.size();i++){
					cout<<"[";
					for(int j=0;j<X[i].size()-1;j++){
						cout<<X[i][j]<<" ";
					}
					cout<<X[i][X[i].size()-1]<<"] ";
				}
			}
			cout<<endl;
			}
			
    return 0;
	}


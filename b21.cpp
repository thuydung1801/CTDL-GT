#include<bits/stdc++.h>
using namespace std;
string s,a[10000];
int n,b[10000];

void in(){
	for(int j=1;j<=n;j++)
		cout<<a[j];
	cout<<" ";
}
void Try(int i){
	// n=s.size();
	for(int j=65;j<65+n;j++){
		if(b[j]){
			a[i]=j;
			b[j]=0;
			if(i==n) in();
			else Try(i+1);
			b[j]=1;
		}
	}
}
	int main(){
		int t;
		cin>>t;
		 cin.ignore();
		while(t--){
			cin>>s;
			 n=s.size();
			 for(int i=65;i<65+n;i++)
			 	b[i]=1;
			Try(1);
			cout<<endl;
		}


		return 0;
	}


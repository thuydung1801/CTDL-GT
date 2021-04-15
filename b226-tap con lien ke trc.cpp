#include<bits/stdc++.h>
using namespace std;
int t,n,k,ok=0,c[500];
void in(){
	for(int i=1;i<=k;i++){
		cout<<c[i]<<" ";
	}
	
}
void sinh(){
	int i=k;
	while(i>0&&c[i]==c[i-1]+1){
		c[i]=n-k+i;
		i--;
	}
	c[i]--;
	if(i<=0){
		for(int i=1;i<=k;i++){
			c[i]=n-k+i;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++)
			cin>>c[i];
		while(!ok){
			sinh();
			in();
			break;
		}
		cout<<endl;
	}
}

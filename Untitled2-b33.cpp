#include<iostream>
#define ll long long
using namespace std;
const int MAX = 111;
int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int A[MAX], Q[MAX], ans = 0;
		for(int i=0; i<n; i++) cin >> A[i];
		if(A[0]>0) Q[0]=A[0];
		else Q[0]=0;
		for(int i=1; i<n; i++){
			 if (Q[i-1] > 0) Q[i]=A[i] + Q[i-1] ;
			 else Q[i]=A[i];
			if(Q[i] > ans) ans=Q[i];
			else ans=ans;
		}
		cout << ans << endl;
	}
}

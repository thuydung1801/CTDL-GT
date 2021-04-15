#include<bits/stdc++.h>
using namespace std;
	int main(){
		string s;
		int t;
		cin>>t;
		stack<int> stk;
		while(t--){
			cin>>s;
			if(s=="PUSH"){
				int so;
				cin>>so;
				stk.push(so);
			}
			else if(s=="PRINT"){
				if(stk.size()>0) cout<<stk.top()<<endl;
				else cout<<"NONE"<<endl;
			}
			else if(s=="POP" &&stk.size()>0 ) stk.pop();
			
		}


		return 0;
	}


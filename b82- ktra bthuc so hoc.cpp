#include<bits/stdc++.h>
using namespace std;
	int main(){
		int t;
		cin>>t;
		cin.ignore();
		while(t--){
			string s;
			getline(cin,s);
			int ok=0;
			stack<char> stk;
			for(int i=0;i<s.size();i++){
				if(s[i]==')'){
					ok=0;
					char res=stk.top();stk.pop();
					while(res!='('){
						if(res=='+'||res=='-'||res=='*'||res=='/')
							ok=1;
						res=stk.top(); stk.pop();
					}
					if(ok==0) break;
				}
				else stk.push(s[i]);
			}
			if(ok==0) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}


		return 0;
	}


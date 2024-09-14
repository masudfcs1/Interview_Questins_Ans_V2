#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
	int count =0;
	int len= s.size();
	
	for(int i=0;i<len;i++){
	    if(s[i]==s){
	        cout<<s[i]<<endl;
	        break;
	    }
	    else if(s[i+1]=s){
	       cout<<s[i+1]<<endl;
	       break;
	    }
	    else cout<<"-1"<<e;
	}
	
	
// 	cout<<len<<endl;

    return 0;
}

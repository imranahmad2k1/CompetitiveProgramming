#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string a,b;
	cin>>a;
	cin>>b;
	transform(a.begin(), a.end(), a.begin(),[](unsigned char c){ return std::tolower(c); });
	transform(b.begin(), b.end(), b.begin(),[](unsigned char c){ return std::tolower(c); });
	if(a<b)cout<<-1<<endl;
	else if(a>b)cout<<1<<endl;
	else cout<<0<<endl;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,c;
	cin >> n;
	c = n;
	if(n%2 ==0) c = n/2;
	if(c%2==0) cout << "YES";
	else cout << "NO";
	return 0;
}

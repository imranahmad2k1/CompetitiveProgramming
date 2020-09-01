#include <iostream>
using namespace std;
int main(){
        int n,a,b,c;
        cin >> n;
 
        int total=0;
        for(int i=0; i<n; ++i){
                cin >> a >> b >> c;
                if(a+b+c > 1) total++;
        }   
        cout << total;
        return 0;
}
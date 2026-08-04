#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==b || a==c || b==c){
            cout << 0 << endl;
        }else{
            int p = max({a,b,c});
            int q = min({a,b,c});
            int r = a+b+c-p-q;
            int min1 = p-r;
            int min2 = r-q;
            cout << min(min1,min2) << endl;
        }
    }
}
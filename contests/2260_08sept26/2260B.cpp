#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x,y,k;
        long long p = 0;
        for(long long i=0; i<k; i++){
            p=p+(y%x);
            x++;
            y++;
        }
        cout << p << endl;
    }
}
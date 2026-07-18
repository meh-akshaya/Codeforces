#include <iostream>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;
        long long maxs = ((n*(n+1)/2)-(((n-k)*(n-k+1))/2));
        long long mins = k*(k+1)/2;
        if(x<=maxs && x>=mins){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}
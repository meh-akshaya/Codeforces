#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--){
        long long a,b,c,d;
        cin >> a >> b>>c>>d;
        long long num = d-b;
        long long num2 = a+num;
        if (num2<c || num<0){
            cout <<  -1 << endl;
        }else {
            cout << num+(num2-c) << endl;
        }
    }
}
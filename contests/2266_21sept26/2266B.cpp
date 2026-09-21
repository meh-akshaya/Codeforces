#include <iostream>
#include <numeric>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        if(a>b){
            cout << (a+c-b) << endl;
        }else if(b>a){
            if(abs(b-a)>abs(a+c-b)){
            cout << abs(b-a) << endl;
            }else{
                cout << abs(a+c-b) << endl;
            }

        }else{
            cout << c << endl;
        }
    }
}
//breakcase
//use abs() in the final answer
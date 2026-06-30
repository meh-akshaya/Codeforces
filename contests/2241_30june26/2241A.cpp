#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int x,y;
        cin >> x  >> y;
        if (y>x){
            cout << "No" << endl;
        } else if (x==y){
            cout << "Yes" << endl;
        } else {
            if (x%y==0){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}

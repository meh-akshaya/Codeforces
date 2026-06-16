#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int flag = 0;
        int count = 0;
        for (int i=0; i<6; i++) {
            if (x.find(s)==string::npos) {
                x = x+x;
                count++;
            }
            else {
                cout << count << endl;
                flag = 1;
                break;
            }
        }
        if (flag==0) {
            cout << -1 << endl;
        }
    }
}
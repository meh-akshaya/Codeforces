#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int empty = 0;
        int flag = 0;
        if (n<3) {
            for (int i=0; i<n; i++) {
                if (s[i]=='.') {
                    empty++;
                }
            }
        }
        else {
            if (s[n-1] == s[n-2] && s[n-2] == s[n-3] && s[n-3] == '.') {
                cout << "2" << endl;
                flag =1;
                }
            else {
                for (int i=0; i<n-2; i++) {
                    if (s[i] == s[i+1] && s[i+1] == s[i+2] && s[i+2] == '.') {
                        cout << "2" << endl;
                        flag = 1;
                        break;
                    }

                    else if (s[i]=='.') {
                        empty++;
                    }     
                }
                for (int i=n-2; i<n; i++) {
                    if (s[i]=='.') {
                        empty++;
                    }
                }
            }
        }
        if (flag == 0) {
            cout << empty << endl;
        }
        
    }
}
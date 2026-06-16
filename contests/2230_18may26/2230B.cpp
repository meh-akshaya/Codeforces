#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int p = 0;
        int q =0;
        int r =0;
        int s=0;
        string::size_type pos;
        pos = str.rfind("12");
        if (pos!=string::npos) {
            int p = pos;
        }
        pos = str.rfind("24");
        if (pos!=string::npos) {
            int q = pos;
        }
        pos = str.rfind("32");
        if (pos!=string::npos) {
            int r = pos;
        }
        pos = str.rfind("44");
        if (pos!=string::npos) {
            int s = pos;
        }
        vector <int> v;
        v.push_back(p);
        v.push_back(q);
        v.push_back(r);
        v.push_back(s);
        int max = INT_MIN;
        for (int i=0; i<v.size(); i++) {
            if (v[i]>max) {
                max = v[i];
            }
        }
        cout << str.length()-(max+2);
    }
}
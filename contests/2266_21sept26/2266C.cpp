#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(s[0] == '1') {
            int ans = 0;

            for(int i = 0; i < n; i++) {
                if(s[i] == '0')
                    ans++;
            }

            cout << ans << endl;
        }
        else {
            int ones = 0;
            int zeros = 0;

            for(int i = 0; i < n; i++) {
                if(s[i] == '0')
                    zeros++;
            }

            int ans = zeros;

            for(int i = 0; i < n; i++) {

                if(s[i] == '1')
                    ones++;
                else
                    zeros--;

                ans = min(ans, ones + zeros);
            }

            cout << ans << endl;
        }
    }
}
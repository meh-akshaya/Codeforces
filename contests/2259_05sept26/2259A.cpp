#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int count = 0;
        int track = k;
        int flag = 0;

        for (int i = 0; i < n; i++) {

            if (track > 1) {
                if (s[i] == '0') {
                    flag = 1;
                }
            }
            else {
                if (s[i] == '0') {
                    flag = 1;
                }

                if (flag == 0) {
                    count++;
                }
                track = k;
                flag = 0;

                continue;
            }

            track--;
        }

        cout << count << endl;
    }

}
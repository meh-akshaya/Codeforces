#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,a,b;
        cin >> n >> a >> b;
        if (n<3) {
            if ((n*a)<=b) {
               cout << n*a << endl;
            }
            else {
                cout << b << endl;
            }
        }
        else {
            if ((n*a)<(((n/3)*b) + (n-((n/3)*3))*a)) {
                if (n*a<((n/3)+1)*b) {
                    cout << n*a << endl;
                }
                else {
                    cout << ((n/3)+1)*b << endl;
                }

            }
            else {
                if (((n/3)*b) + (n-((n/3)*3))*a<((n/3)+1)*b) {
                    cout << ((n/3)*b) + (n-((n/3)*3))*a << endl;
                }
                else {
                    cout << ((n/3)+1)*b << endl;
                }
            }           
        }

    }
}
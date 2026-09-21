#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a1,a2,a3;
        cin >> a1>>a2>>a3;
        int mini = min({a1,a2,a3});
        cout << n-mini << endl;
    }
}
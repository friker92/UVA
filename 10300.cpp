#include <iostream>


using namespace std;

int main() {
    int n, f, sum, s, a, b;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> f;
        sum = 0;
        for(int j=0;j<f;j++) {
            cin >> s >> a >> b;
            sum += s * b;
        }
        cout << sum << endl;
    }
    return 0;
}
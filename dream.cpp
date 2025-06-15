#include <bits/stdc.h++>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) { 
        for (int j = 1; j <= m; ++j) { 
            int x;
            cin >> x;
            if (x == 1) {
                cout << i << " " << j << endl;
                return 0; 
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int m, n;
int main(){
    cin >> n >> m;
    int a[n][m];
    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = 1000000;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            b[i] = min(a[i][j], b[i]);
        }
    }
    sort(b, b+ n);
    cout << b[n - 1];
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b,c;
    int d[a];
    int max = 0;
    cin >> a >> b >> c;
    for(int i = 0; i < a; i++){
        cin >> d[i];
    }
    sort(d, d+ a);
    int total = d[a - 1] * (c) + d[a-2];
    int ans = b/c * total + b%c *d[a-2];
    cout << ans;
}
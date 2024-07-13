#include <bits/stdc++.h>
using namespace std;
int main(){
    int money;
    int cnt = 0;
    cin >> money;
    int change[4] = {500,100,50,10};
    for(int i = 0; i < 4; i++){
        cnt += money / change[i];
        money %= change[i];
    }
    cout << cnt;

}
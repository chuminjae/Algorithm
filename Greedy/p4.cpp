// Solution 1
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    int cnt = 0;
    cin >> n >> m;
    while(n!=1){
        if(n % m != 0){
            n -= 1;
            cnt ++;
        }
        else{
            n /= m;
            cnt++;
        }
    }
    cout << cnt;
}
// Solution 2
#include <bits/stdc++.h>
using namespace std;
int n, m, tmp, cnt;
int main(){
    cin >> n >> m;
    while(true){
        tmp = (n / m) * m;
        cnt += n - tmp;
        n = tmp;
        if(n < m){
            break;
        }
        cnt ++;
        n = n / m;
    }
    cnt += n - 1;
    cout << cnt;

}
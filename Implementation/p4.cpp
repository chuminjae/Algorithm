#include <bits/stdc++.h>
using namespace std;
int d;
int a[100][100];
int b[100][100];
int mx[4] = {-1,0,1,0};
int my[4] = {0,-1,0,1};
int n, m;
int x, y;
int nx, ny;
int cnt = 1;
int tmp;
void left(){
    if(d ==3 ){
        d = 0;
    }
    else{
        d += 1;
    }
}
int main(){
    cin >> n >> m;
    cin >> x >> y >> d;
    b[x][y] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    while(true){
        left();
        nx = x + mx[d];
        ny = y + my[d];
        if(nx < n && ny < m){
            if(a[nx][ny] == 0 && b[nx][ny] == 0){
                tmp = 0;
                cnt += 1;
                x = nx;
                y = ny;
                b[x][y] = 1;
            }
            else{
            tmp++;
        }
        }
        if(tmp == 4){
            nx = x - mx[d];
            ny = y - my[d];
            if(nx < n && ny < m){
                if(a[nx][ny] == 0){
                x = nx;
                y = ny;
                }
                else{
                break;
                }

            }

        }
    }
    cout << cnt;
}
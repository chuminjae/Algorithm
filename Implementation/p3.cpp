#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;
int main(){
    vector<pair<int, int>> a;
    a.push_back(make_pair(-2,-1));
    a.push_back(make_pair(-1,-2));
    a.push_back(make_pair(1,-2));
    a.push_back(make_pair(2,-1));
    a.push_back(make_pair(2,1));
    a.push_back(make_pair(1,2));
    a.push_back(make_pair(-1,2));
    a.push_back(make_pair(-2, 1));
    cin >> s;
    int x = s[0] - 96;
    int y = s[1] - 48;
    int nx = x;
    int ny = y;
    for(int i = 0; i < a.size(); i++){
        nx = x+ a[i].first;
        ny = y +a[i].second;
        if(nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8){
            cnt +=1;
        }
    }
    cout << cnt;
}
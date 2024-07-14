#include <bits/stdc++.h>
using namespace std;
int n;
int x, y;
string str;
void d(char a, int a1, int b1){
    if(a == 'R' && a1 <n){
         x += 1;
    }
    else if(a == 'L' && a1 > 1){
         x -=1;
    }
    else if(a == 'U' && b1 > 1){
         y -=1;
    }
    else if(a == 'D' && b1 <n){
        y+= 1;
    }
}
int main(){
    x = 1;
    y = 1;
    cin >> n;
    cin.ignore();
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        d(char(str[i]),x,y);
    }
    cout << y << " " << x;
}
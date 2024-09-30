b.cpp
#include<bits/stdc++.h>
#vector
using namespace std;
#define PD ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main() {
    PD;
    int H,W
    cin>>H>>W;
    vector<string> image(H);
    for(int i=0;i<W;++i){
        cin >> image[i];      
    }
    for (int i = 0; i < W + 2; ++i) {
        cout << "#"<<endl;
    }
    cout << endl;
    for (int i = 0; i < H; ++i) {
        cout << "#" << image[i] << "#" << endl;
    }
    for (int i = 0; i < W + 2; ++i) {
        cout << "#";
    }
    cout << endl;
    return 0;
}
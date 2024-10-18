#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a[100];

    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    unordered_map<int, int> demTong;
    int soDep=0;

    for (int i=0;i<n;i++) {
        int tong=0; int so=a[i];

        while (so>0) {
            tong+=so%10;
            so/=10;;
        }
        
        soDep+= demTong[tong]++;
    }
    cout<<soDep<<endl;
    return 0;
}

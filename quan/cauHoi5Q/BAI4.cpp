#include <iostream>
using namespace std;

int main() {
    int q;
    cin>>q;

    while (q--) {
        int n,m;
        cin>>n>>m;

        int tong=0;

        for (int i=1;i<=n/m;++i) {
            int trang=i*m;
            tong+=trang%10;
        }
        cout<<tong<<endl;
    }

    return 0;
}

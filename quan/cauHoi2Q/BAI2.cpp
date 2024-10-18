#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a[100];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    int r;
    cin>>r;

    int dem=0;
    for (int i=0;i<n;i++) {
        if (a[i]>r) break;

        int tong=0;
        int number=a[i];
        while (number>0) {
            tong+=number%10;
            number/=10;
        }

        if (a[i]%tong==0) {
            dem++;
        }
    }

    cout<<dem<<endl;

    return 0;
}

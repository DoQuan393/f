#include <iostream>
#include <cmath>
using namespace std;
int demUoc(int x) {
    int dem=0;
    for (int i=1;i<=sqrt(x);i++) {
        if (x%i==0) {
            dem++;
            if (i!=x/i) {
                dem++;
            }
        }
    }
    return dem;
}

int a[101];
int main() {
    int n;
    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>A[i];
    }

    int nhieuUoc=0;
    int so=0;

    for (int i=0;i<n;i++) {
        int dem2=demUoc(A[i]);

        if (dem2>nhieuUoc) {
            nhieuUoc=dem2;
            so=A[i];
        } else if (dem2==nhieuUoc) {
            so=max(so,A[i]);
        }
    }

    cout << so << endl;

    return 0;
}

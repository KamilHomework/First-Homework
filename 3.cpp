#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    int a[n]; 
    // int *a = new int[n];
    int t = n%2==0? n/2: (n/2)+1;
    for (int i=0; i<t;i++){
        cin >> a[i];
        a[n-1-i]=a[i];
    }
    for (int i=0;i<n;i++){
        cout << a[i];
    }
    //delete [] a;
}

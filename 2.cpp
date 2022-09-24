#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    int a[100];
    for (int i=0;i<100;i++){
        a[i]=0;
    }
    for (int i=0; i<n;){
        int t = rand()%100;
        if (a[t]==0){
            cin >>a[t];
            i++;
        }
    }
    for (int i=0; i <100;i++){
        cout << a[i];
    }
}

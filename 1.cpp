#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    int a[n];
    // int *a = new int[n];
    vector <int> ans; 
    ans.push_back(0);
    for (int i=0; i<n;i++){
        cin >> a[i];
        if (a[i] > ans[ans.size()-1] )
            ans.push_back(a[i]);
    } 
    for (int i=0; i < ans.size(); i++){
        if (ans[i]!=0)
            cout << ans[i] << " ";
    }
}

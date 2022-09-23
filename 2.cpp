Номер 2
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 int n;
 cin >> n;
 int a[100];
 for (int i=0; i<n;i++){
  int t = rand()%100;
  if (a[t]==0){
   cin >>a[t];
  }
 }
 for (int i=0; i <100;i++){
  cout << a[i];
 }
}
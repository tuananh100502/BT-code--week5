#include <iostream>

using namespace std;
void IN(int m, int n){
for(int i=0;i<m;i++){
    cout << " ";
}
for(int i=0;i<n;i++){
    cout << "*";
}
}
int main()
{
    int m,n,i;
    cin >> n  ;
    for(i=0;i<n;i++){
        IN(n-i-1,2*i+1);
        cout << endl;
    }
}

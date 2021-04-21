#include <iostream>

using namespace std;

int UCLN(int a,int b)
{
    int n,i;
    if(a<=b){
        n=a;
    }else n=b;
    for(i=n;i>=1;i--){
        if(a%i==0&&b%i==0){
            break;
        }
    }
    return i;
}
int main(){
int a,b;
cin >> a >> b;
int i=UCLN(a,b);
cout << i;
}

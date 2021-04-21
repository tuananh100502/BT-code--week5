#include <iostream>
#include <cmath>
using namespace std;

int check (int n){
 int count =0,i;
 if(n<2) return 0;
 if(n>=2){
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            count+=1;
    }
    if(count==0) return 1;
    else return 0;
 }
}
int main(){
int n;
cin >> n;
int 1 = check (n);
cout << 1 << endl;
return 0;
}

#include <iostream>
using namespace std;
long int factorial(int n){
	if(n==1) return 1;
	else {
		cout << n << "!=" << n * factorial(n-1) << " " << "at" << &n;
		cout << endl;
		return  n * factorial(n-1);
	}
	
}
int main(){
	int n;
	cin >> n;
	factorial(n);
	return 0;
}

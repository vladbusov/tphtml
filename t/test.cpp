#include <iostream>
using namespace std;

int main(){
	int * b = new int[50];
	cout << b[-1] << endl << b[-2] << endl ;
	return 0;
}

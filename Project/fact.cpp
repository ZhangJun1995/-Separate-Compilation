#include <iostream>
#include "head.h" 
using namespace std;

//й╣ож╫вЁк 
int f(int val){
	int ret = 1;
	while(val > 1){
		ret *= val--;
	}
	cout << "factorial value is " << ret << endl;	
	return ret;
}

int f(void){
	int val{0}, ret{1};
	cout << "Input value: ";
	cin >> val;
	while(val > 1){
		ret *= val--;
	}
	cout << "factorial value is " << ret << endl;	
	return ret;
}

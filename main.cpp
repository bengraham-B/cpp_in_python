#include <iostream>
using namespace std;

#include "math/addition.h"

extern "C"{
	void sayHello(){
		cout << "Hello :)" <<endl;
	}

	void addNumbers (int num1, int num2){
		int result = num1+ num2;
		cout << result <<endl;
		addition(num1, num2);
	}
}


int main(){
	cout << "C++"<<endl;
	return 0;
}

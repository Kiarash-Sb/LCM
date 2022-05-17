#include <iostream>
using namespace std;
int main() {
	int n1,n2,lcm;
	cout << "Enter two numbers :\n";
	cin >>n1>>n2;
	lcm=(n1>n2) ? n1:n2;
	do {
		if(lcm%n1==0 && lcm%n2==0) {
			cout << "LCM = "<<lcm;
			break;
		}
		else
			++lcm;
	} while (true);
	return 0;
}

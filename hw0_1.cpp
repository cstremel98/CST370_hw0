#include <iostream>
using namespace std;

int main() {

	int a, b;

	while(cin >> a && cin >> b) {
		int diffResult;
		if(a<0) {
			diffResult = (a*-1)+b;
		} else {
			diffResult = a-b;
		}

		cout << "SUM: " << (a+b) << endl;
		cout << "DIFF: " << diffResult << endl;
	}
	return 0;
}

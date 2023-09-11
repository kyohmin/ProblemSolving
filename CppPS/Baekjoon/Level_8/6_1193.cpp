#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int i = 1;
	while (N > i) {      // i is to find row
		N -= i;
		i++;
	} 

	if (i % 2 == 1)
		cout << i + 1 - N << '/' << N << endl;
	else
		cout << N << '/' << i + 1 - N << endl;
}
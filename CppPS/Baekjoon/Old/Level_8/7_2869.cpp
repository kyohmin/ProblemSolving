#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double dayUp, dayDown, total;
	int day;

	cin >> dayUp >> dayDown >> total;
	day = ceil(((total - dayUp) / (dayUp - dayDown)));

	cout << day +1;   // +1 as day starts with 0  
}
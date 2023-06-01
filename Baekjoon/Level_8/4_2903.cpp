#include <iostream>

using namespace std;

int dots(int n);

int main(){
    int times;
    cin >> times;
    int row = dots(times);

    cout << row*row;

    return 0;
}

int dots(int n){
    if(n == 1){
        return 3;
    }
    return (dots(n-1)-1)*2+1;
}

// Used recursive to solve the problem
/*   This one also works

    int main(){
	    int n;
	    int x = 2;     // Initial dots
 
	    cin >> n;
 
	    while(n--) {
		    x += (x - 1);
	    }
 
	    x *= x;
 
	    cout << x << endl;
 
	    return 0;
    }

*/
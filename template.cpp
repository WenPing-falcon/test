#include <iostream>

using namespace std;

template <class T>
T min(T x, T y){
    return (x<y) ? x: y;
}

int main (){

    int a = 10, b = 5;
    float x = 0.1, y = 0.5;

    cout << "10 5 min: " << min(a, b) << endl;
    cout << "0.1 0.5 min: " << min(x, y) << endl;

    return 0;
}

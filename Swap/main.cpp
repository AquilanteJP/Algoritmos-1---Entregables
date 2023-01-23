#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int a0=a;
    int b0=b;
    a=b0;
    b=a0;
}

int main() {
    /* No hace falta modificar el main */
    int a,b;
    //Leo a
    cin >> a >> b;
    
    swap(a,b);
    
    //Devuelvo despues del swap
    cout << a << " " << b;
    return 0;
}

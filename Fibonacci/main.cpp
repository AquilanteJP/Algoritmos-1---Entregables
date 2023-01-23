#include <iostream>

using namespace std;

// Funcion de fibonacci que calcula n-esimo termino
int fibonacci(int n){
    int a=0;
    int b=1;
    int c=0;
    for(int i=0;i<n;i++){
        a=b;
        b=c;
        c=a+b;
    }
    return c;
}

int main() 
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;    
    return 0;
}

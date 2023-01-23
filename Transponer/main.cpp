#include <iostream>
#include <vector>

using namespace std;

//void swap(int& a, int& b){
    //int a0=a;
    //int b0=b;
    //a=b0;
    //b=a0;
//}

void trasponer(vector<vector<int> > &m) {
    int offset=0;
    for(int i=0;i<m.size();i++){
        for(int j=offset;j<m.size();j++){
            int a0=m[i][j];
            int b0=m[j][i];
            m[i][j]=b0;
            m[j][i]=a0;
        }
        offset++;
    }
}

int main()
{
    /* No hace falta modificar el main */
    // Leo la entrada
    int n; // Cantidad de filas y columnas de la matriz
    cin >> n;
    int x;
    int filas = n, columnas = n;
    vector<vector<int> > m(filas, vector<int>(columnas, 0)); // En m leo la matriz
    
    for (int f = 0; f < filas; ++f) {
        for (int c = 0; c < columnas; ++c) {
            cin >> x;
            m[f][c] = x;
        }
    }

    trasponer(m); 
    
    cout << filas << " " << columnas << endl;
    for (int f = 0; f < filas; ++f) {
        for (int c = 0; c < columnas; ++c) {
            cout << m[f][c] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

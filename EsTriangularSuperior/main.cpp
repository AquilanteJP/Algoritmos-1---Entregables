#include <iostream>
#include <vector>

using namespace std;

bool esTriangularSuperior(const vector<vector<int> > &m){
    if(m.size()==m[0].size()){
        bool laposta = true;
        int offset=1;
        for(int i=0;i<m.size();i++){
            for(int j=offset;j<m.size();j++){
                if(m[i][j]!=0){
                    laposta = false;
                }
            }
            offset++; 
        }
        return laposta;
    }
    return false;
}

bool esTriangularInferior(const vector<vector<int> > &m){
    if(m.size()==m[0].size()){
        bool laposta = true;
        int offset=1;
        for(int j=0;j<m.size();j++){
            for(int i=offset;i<m.size();i++){
                if(m[i][j]!=0){
                    laposta = false;
                }
            }
            offset++; 
        }
        return laposta;
    }
    return false;
}

bool esTriangular(const vector<vector<int> > &m){
    return (esTriangularInferior(m) || esTriangularSuperior(m));
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

    bool res = esTriangular(m);
    cout << (res ? "true" : "false");    
    return 0;
}

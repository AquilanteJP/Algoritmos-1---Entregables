#include <iostream>
#include <vector>

using namespace std;

bool esCreciente(vector<int> v){
    bool result;
    for(int i=0;i<v.size()-1;i++){
        if (v[i]<=v[i+1]){ //creciente
            result=true;
        } else {
            result=false;  //si criterio de orden falla
            break;
        }
    }
    return result;
}

bool esDecreciente(vector<int> v){
    bool result;
    for(int i=0;i<v.size()-1;i++){
        if (v[i]>=v[i+1]){ //decreciente
            result=true;
        } else {
            result=false;  //si criterio de orden falla
            break;
        }
    }
    return result;
}

bool estaOrdenado(vector<int> v){
    return (esCreciente(v) || esDecreciente(v));
}
    
int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; 
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    
    // Evaluo si el vector v esta ordenado
    bool res = estaOrdenado(v);
    
    // Imprimo la salida
    cout << (res?"True":"False");
    
    return 0;
}

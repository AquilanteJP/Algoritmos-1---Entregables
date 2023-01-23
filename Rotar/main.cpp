#include <iostream>
#include <vector>

using namespace std;

vector<int> invertir(vector<int> v){
    int n = v.size();
    for(int i=0;i<n/2;i++){
        int a = v[i];
        int b = v[n-1-i];
        v[n-1-i] = a;
        v[i] = b;
    }
    
    return v;
}

vector<int> rotar(vector<int> v, int k){
    
    vector<int> overkill = invertir(v);
    int ultO = overkill.size(); //invierto el vector para poder poppear_back los elementos a rotar
    vector<int> rotados;
    
    for(int i=0;i<k;i++){
      rotados.push_back(overkill[ultO-1-i]); //en rotados, meto los elem. a rotar
      overkill.pop_back(); //saco los elem. que voy a rotar
    }
    vector<int> normal = invertir(overkill); //vuelvo a la normalidad al vector entrada, ahora con menos elem.
    
    for(int i=0;i<rotados.size();i++){
        normal.push_back(rotados[i]); //coloco los elementos rotados en orden correcto
    }
    
    return normal;
}

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n; //Longitud del vector a rotar
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    
    int k; // La cantidad que tengo que rotar la guardo en k
    cin >> k;
    
    // Hago la rotacion
    vector<int> res = rotar(v,k);
    i = 0;
    
    // Imprimo el vector resultado
    while (i < res.size()){
        cout << res[i] << " ";
        i++;
    }

    return 0;
}

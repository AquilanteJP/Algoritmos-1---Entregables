#include <vector>
#include <iostream>

using namespace std;

int indiceMinSubsec(vector<int> v, int l, int r){
  if(v.size()>0 && (0<=l && l<v.size()) && (0<=r && r<v.size()) && l<=r){
    if(r==l){
      return l;
    } else {
      int min=v[r];
      int minInd=r; /*para hacer la comparación, debo guardar un valor mínimo para comparar los del array; */ 
      for(int i=l;i<r;i++){ /*al determinar ese valor como el de r, me ahorro tener que checkearlo aparte */ 
          if(min<v[i]){     /*y resuelvo la redundancia de chequear 2 veces cualquier otro valor del array */
              continue; 
          } else {      
              min=v[i];
              minInd=i;
          } 
      }
      return minInd;
    }
  }    
  return 0; /*debido a que filtro con if mis casos, debo asegurar q si no se cumplen,*/
  /*DE TODAS FORMAS devuelva un int si o si */
}

/*implementado de esta forma, la subseq es [l,r], r inclusive*/

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
    
    int l,r;
    cin >> l >> r;
    // Calculo el minimo
    int min = indiceMinSubsec(v,l,r);
    
    // Impimo salida
    cout << min;
        
    return 0;
}

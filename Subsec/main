#include <iostream>
#include <string>

using namespace std;

bool subsecuencia(string s, string t) {
    int matches=0; 
    int oT=0; //offset de t, "" por cada lugar ya recorrido en t
    bool encontro;
    for(int i=0;i<s.size();i++){
        int pT=0;
        for(int j=oT;j<t.size();j++){
            encontro = false;
            pT++;
            if(s[i]==t[j]){
                encontro=true;
                matches++; //sumo 1 x cada match
                break; //paro la iteración
            }
        }
        if (encontro==false){ //si no encuentra match de un caracter corto antes
            return false;
        }
        oT=oT+pT; //agrego lugares recorridos
        pT=0; //reseteo puntero
    }
    return (matches==s.size()); //si hubieron tantos matches como caracteres en s, es subsec, sino no
}

int main()
{
    /* No hace falta modificar el main */
    // Leo la entrada
    string s, t;
    cin >> s >> t;
    
    bool res = subsecuencia(s, t);
    cout << (res ? "true" : "false");
    return 0;
}

#include <iostream>
#include <fstream>
#include <list>
#include "Animal.hpp"
#include <string>
#include <algorithm>
#include <cassert>
#include <exception>

using namespace std;
#define s endl;


int main() {
    int a =2;
    int b =3;
    //assert(a>b);//arrete le programme si elle est fausse

    int x =2;
    int y=2;
    double resultat ;
    try{
        if(y==0){
            throw logic_error("div par zero");//ou runtime_error
        }
        resultat = x/y;
        cout<<"resultat: "<<resultat<<endl;
    } catch(exception& e){
        cout<<"erreur, "<<e.what();
        
    };  
    








    return 0;
}
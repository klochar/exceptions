#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <algorithm>
#include <cassert>
#include <exception>//pas oblige de herite de std::eception pour faire marcher les try and catch

using namespace std;
#define s endl;


int main() {
    int a =2;
    int b =3;
    //assert(a>b);//arrete le programme si elle est fausse

    double x =2;
    double y=0;
    double resultat ;
    try{
        if(y==0){
            throw logic_error("div par zero");//ou runtime_error//va terminer le programme
        }
        resultat = x/y;
        cout<<"resultat: "<<resultat<<endl;
    } catch(exception& e){
        cerr<<"erreur, "<<e.what()<<endl;
        
    };  

    cout<<"salut1"<<endl;//le programme a continuer et n a pas terminate 
    
    







    return 0;
}
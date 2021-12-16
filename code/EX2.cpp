#include <iostream>
#include <string>

using namespace std;

// Creation d'une fonction qui decompose les date
void decomp(string date){
    // Creation des variables type String
    string jour, mois, an, heur, minute;
    // Employer la methode substr() pour decomposer la date
    jour = date.substr(0,2);
    mois = date.substr(2,2);
    an = date.substr(4,4);
    heur = date.substr(8,2);
    minute = date.substr(10,2);

    cout<<"La date est: "<<jour<<"/"<<mois<<"/"<<an<<" a "<<heur<<":"<<minute<<endl;
}
int main()
{
    string date;
    // Demande a l'utilisateur d'entrer une date
    cout<<"Entrer une date sous la forme (JJMMAAAAHHNN): "<<endl;
    cin>>date;

    // affichage de la date d'apres la fonction decomp()
    decomp(date);

    return 0;
}

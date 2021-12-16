#include <iostream>
#include <list>

using namespace std;


int main()
{
    // Declaration d'une liste
    list <int> myList;
    // Declaration d'un iterator
    list <int>::iterator myIt;
    int nbr;
    do
    {
        cout << "Entrer le nombre "<<endl;
        cin >> nbr;
        myList.push_back(nbr);
    }while (nbr != 0);
    // Utilisation de sort() pour trier la liste
    myList.sort();

    // Affichage de la liste
    cout << "la nouvelle liste: "<<endl;
    for(myIt=myList.begin(); myIt!=myList.end(); myIt++){
        cout << *myIt << endl;
    }
    
    return 0;
}
#include <iostream>
#include <list>

using namespace std;

// Creation de la classe Animal
class Animal{
    // Les attributs
    protected:
    string nom;
    int age;
    string genre;
    // Les methodes
    public:
    void setNom(string nom){
        this->nom = nom;
    }
    void setAge(int age){
        this->age = age;
    }
    void setGenre(string genre){
        this->genre = genre;
    }
    string getNom(){
        return this->nom;
    }
    int getAge(){
        return this->age;
    }
};

// Creation de la classe Element
class Element{
    private:
    string nom;
    string type;
    public:
    void setNom(string nom){
        this->nom = nom;
    }
    void setType(string type){
        this -> type = type;
    }
    string getNom(){
        return this->nom;
    }
    string getType(){
        return this -> type;
    }
};
// Creation de la classe Repas
class Repas{
    private:
    string nom;
    int heure;
    string description;
    list <Element> elementsList;
    public:
    void setNom(string nom){
        this->nom = nom;
    }
    void setHeure(int heure){
        this->heure = heure;
    }
    void setDescription(string description){
        this->description = description;
    }
    void setElementsList(list <Element> elementsList){
        this->elementsList = elementsList;
    }
    string getNom(){
        return this->nom;
    }
    int getHeure(){
        return this->heure;
    }
    string getDescription(){
        return this->description;
    }
    list <Element> getElementsList(){
        return this->elementsList;
    }
};
// Creation de la classe Animal
class Chat: public Animal{
    private:
    string type;
    Repas chatRepas;
    public:
    void setType(string type){
        this->type = type;
    }
    void setRepas(Repas chatRepas){
        this->chatRepas = chatRepas;
    }
    string getType(){
        return this->type;
    }
    Repas getRepas(){
        return this->chatRepas;
    }
    void sauter(){
        cout<<"SAUT"<<endl;
    }
};
// Creation de la classe Race
class Race{
    protected:
    string specifite;
    bool isRaceHybride(){
        if (specifite=="hybride"){
            return true;
        }
        return false;
    }
    public:
    void setSpecifite(string specifite){
        this->specifite = specifite;
    }
    string getSpecifite(){
        return this->specifite;
    }
};
class Entraineur;
// Creation de la class Chien
class Chien:public Animal,Race{
    private:
    string taille;
    list <Entraineur> entraineurList;
    public:
    void setTaille(string taille){
        this->taille = taille;
    }
    void setEntraineurList(list <Entraineur> entraineurList){
        this->entraineurList = entraineurList; 
    }
    string getTaille(){
        return this->taille;
    }
    list <Entraineur> getEntraineurList(){
        return this->entraineurList;
    }
    bool isChass3(){
        return true;
    }
};
// Creation de la classe Entraineur
class Entraineur{
    // Les attributs
    private:
    string nom;
    string description;
    list <Chien> chienList;
    // Les methodes
    public:
    void setNom(string nom){
        this->nom = nom;
    }
    void setDescription(string description){
        this->description = description;
    }
    void setChienList(list <Chien> chienList){
        this->chienList = chienList;
    }

    string getNom(){
        return this->nom;
    }
    string getDescription(){
        return this->description;
    }
    list <Chien> getChienList(){
        return this->chienList;
    }
};

// Creation de la classe Compitition
class Compitition{
    // Les attributs
    private:
    string date;
    string nom;
    Chien chien;
    Entraineur entraineur;
    // Les methodes
    public:
    int ordre;
    void setDate(string date){
        this->date = date;
    }
    void setNom(string nom){
        this->nom = nom;
    }
    void setChien(Chien chien){
        this->chien = chien;
    }
    void setEntraineur(Entraineur entraineur){
        this->entraineur = entraineur;
    }
    string getDate(){
        return this->date;
    }
    string getNom(){
        return this->nom;
    }
    Chien getChien(){
        return this->chien;
    }
    Entraineur getEntraineur(){
        return this->entraineur;
    }
};

int main()
{
    // Creation des objets Elements
    list <Element> elements;
    Element elem1,elem2;
    elem1.setNom("Premier element");
    elem1.setType("Premier type");
    elem2.setNom("Deuxieme element");
    elem2.setType("Deuxieme type");
    elements.push_back(elem1);
    elements.push_back(elem2);
    // Creation des objets Repas
    Repas repas;
    repas.setNom("Dejeuner");
    repas.setHeure(1);
    repas.setDescription("Poulet");
    repas.setElementsList(elements);
    // Creation d'objet Chat
    Chat chat;
    chat.setNom("chat");
    chat.setGenre("male");
    chat.setAge(5);
    chat.setRepas(repas);
    chat.setType("siamoi");
    chat.sauter();
    // Creation d'objet Chien
    Chien chien;
    chien.setNom("Chien");
    chien.setGenre("male");
    chien.setAge(7);
    chien.setTaille("grand");
    list <Chien> chienList;
    chienList.push_back(chien);
    // Creation d'objet Entraineur
    Entraineur entraineur;
    entraineur.setNom("entraineur");
    entraineur.setChienList(chienList);
    entraineur.setDescription("Entraineur 1");
    list <Entraineur> entrList;
    entrList.push_back(entraineur);
    chien.setEntraineurList(entrList);
    // Creation d'objet compition
    Compitition compitition;
    compitition.setNom("Competition 1.0");
    compitition.setDate("Decembre 2021");
    compitition.setChien(chien);
    compitition.setEntraineur(entraineur);

    // Affichage
    cout << compitition.getNom()<<endl;
    cout << compitition.getDate() <<endl;
    cout << compitition.getEntraineur().getNom() <<endl;
    cout << compitition.getEntraineur().getDescription() <<endl;
    cout << compitition.getChien().getNom() <<endl;

    list <Element>::iterator iterator;
    iterator = repas.getElementsList().begin(); 
    cout << iterator->getNom() <<" "<<iterator->getType()<<endl;

    return 0;
}
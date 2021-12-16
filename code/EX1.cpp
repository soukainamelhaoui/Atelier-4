#include <iostream>

using namespace std;

// Creation de la classe Complex
class Complex
{
    public:
    float real;
    float imag;
    void set(float real, float imag){
        this->real=real;
        this->imag=imag;
    }
    void afficher(){
        cout<<"Le nombre complexe est: "<<real<<" + i"<<imag<<endl;
    }
    // Operateur d'addition
    Complex operator+(Complex nbr){
        Complex result;
        result.imag = this->imag + nbr.imag;
        result.real = this->real + nbr.real;
        return result;
    }
    // Operateur de soustraction
    Complex operator-(Complex nbr){
        Complex result;
        result.imag = this->imag - nbr.imag;
        result.real = this->real - nbr.real;
        return result;
    }
    // Operateur de multiplication
    Complex operator*(Complex nbr){
        Complex result;
        result.imag = this->real * nbr.imag + this->imag * nbr.imag;
        result.real = this->real * nbr.real - this->imag * nbr.imag;
        return result;
    }
    // Operateur de division
    Complex operator/(Complex nbr){
        Complex result;
        result.real = (this->real * nbr.real + this->imag * nbr.imag) /
                (nbr.real * nbr.real + nbr.imag * nbr.imag);
        result.imag = (this->imag * nbr.real - this->real * nbr.imag) /
                (nbr.real * nbr.real + nbr.imag * nbr.imag);
        return result;
    }
};


int main()
{
    float real,imag;

    // Creation des objets
    Complex nbr1,nbr2;
    
    // Demande des valeurs du premier nombre
    cout << "entrer la valeur de la partie reelle: " << endl;
    cin >> real;
    cout << "entrer la valeur de la partie imaginaire: " << endl;
    cin >> imag;
    nbr1.set(real, imag);

    // Demande des valeurs du deuxieme nombre
    cout << "entre la valeur de la partie reelle: " << endl;
    cin >> real;
    cout << "entre la valeur de la partie imaginaire: " << endl;
    cin >> imag;
    nbr2.set(real, imag);

    // Affichage des nombre
    nbr1.afficher();
    nbr2.afficher();

    // Affectation des operateurs a des variables
    Complex addRes = nbr1 + nbr2;
    Complex souRes = nbr1 - nbr2;
    Complex mulRes = nbr1 * nbr2;
    Complex divRes = nbr1 / nbr2;

    // Affichage du resultat des operations + - * /
    cout<<"Le resultat de l'addition est: "<<addRes.real<<" + i"<<addRes.imag<<endl;
    cout<<"Le resultat de la soustraction est: "<<souRes.real<<" + i"<<souRes.imag<<endl;
    cout<<"Le resultat de la multiplication est: "<<mulRes.real<<" + i"<<mulRes.imag<<endl;
    cout<<"Le resultat de la division est: "<<divRes.real<<" + i"<<divRes.imag<<endl;
    

    return 0;
}
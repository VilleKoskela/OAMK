#include <iostream>

using namespace std;

/*Esimerkki havainnollistaa try catch rakenteer tar etta.
 * Sovellus kyselee lukuham kunnes annetaan luku 999
 * Sovelus lukee käyttäjän syötteen merkkijono ja muuttaa
 * sen kokonaisluvuksi. Sovellus tulostaa annetun luvun
 * kalsinkertaisena.
 * Merkkijonon muunnos kokonaisluvuksi tehdään tässä
 * stoi-funktiolla.
 * */
int main()
{
    int number=1;
    string word;
    //Tällä versiolla sovellus kaatuu, jos annetaan vahingossa
    //merkkejä tai liian iso luku

    // while  (number != 999){
    //     cout<<"Anna kokonaisluku: ";
    //     cin>>word;
    //     number=stoi(word);
    //     cout<<"Kaksinkertaisena luku="<<2*number<<endl;
    // }
/*
    while(number != 999){
        cout<<"Anna kokonaisluku: ";
        cin>>word;
        try {
            number=stoi(word);
            cout<<"Kaksinkertaisena luku ="<<2*number<<endl;
        } catch (const invalid_argument &e) {
            cout<<"Jokin meni vikaan"<<endl;
            cout<<e.what();
        }
    }*/
    while(number != 999){
        cout<<"Anna kokonaisluku: ";
        cin>>word;
        try {
            number=stoi(word);
            cout<<"Kaksinkertaisena luku ="<<2*number<<endl;
        } catch (...) {
            cout<<"Jokin meni vikaan"<<endl;
        }
    }
    return 0;
}

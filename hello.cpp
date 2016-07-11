#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    char decyzjaUzytkownika = 'T';
    
    cout << "Czy możemy przejść na Ty? (T/N)" << endl;
    cin >> decyzjaUzytkownika;
    
    if (toupper(decyzjaUzytkownika) == 'T')
    {
        string imieUzytkownika;
        
        cout << "Jak masz na imię?" << endl;
        cin >> imieUzytkownika;
        
        cout << "Witaj, " << imieUzytkownika << "!" << endl;
    }
    else if (toupper(decyzjaUzytkownika) == 'N')
    {
        cout << "Witaj, świecie!" << endl;
    }
    else
    {
        cout << "Polecenie nie zostało rozpoznane!" << endl;
    }
    
    return 0;
}

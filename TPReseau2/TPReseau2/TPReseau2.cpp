// TPReseau2.cpp : définit le point d'entrée de l'application.
//

#include "TPReseau2.h"
#include <bitset>
#include <string>

#include "Player.h"

using namespace std;

int main()
{
    Player p;
    p.Display();

    // On serialize
    Serializer serializer(255);
    p.Write(serializer);

    p.Reset();

    // On deserialize
    /*Deserializer deserializer;
    p.Read(deserializer);
    p.Display();*/

    return 0;
}




/*void IntToBinary(int n)
{
    //permet d'avoir le nombre de chiffre de n
    int size = log10(n) + 1;

    
    int *tab = new int[size*4];

    int i = 0;

    cout << size << endl;

    while (n > 0) {

        tab[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << tab[j] << endl;
    }
}

void FloatToBinary(float f)
{
    
    char* bits = reinterpret_cast<char*>(&f);
    for (std::size_t n = 0; n < sizeof f; ++n)
    {
        std::cout << std::bitset<8>(bits[n]);
        std::cout << '\n';
    }
    
    
}

void StringToBinary(std::string s)
{
    for (std::size_t i = 0; i < s.size(); ++i)
    {
        cout << bitset<8>(s.c_str()[i]) << endl;
    }
}
*/



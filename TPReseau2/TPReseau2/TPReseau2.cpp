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

    std::cout << "\n________________________________________\n";
    // On deserialize
    Deserializer deserializer(serializer.GetBuffer(), serializer.GetBufferSize());
    p.Read(deserializer);
    p.Display();

    std::cout << "\n________________________________________\n";

    return 0;
}





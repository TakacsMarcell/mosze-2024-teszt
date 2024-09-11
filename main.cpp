#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS hibásan van írva
    std::cout << '1-100 ertekek duplazasa'; //Hibás string zárójelbe foglalás
    for (int i = 0;) // Ciklusnak a feltétel hiányos
    {
        b[i] = i * 2; // i+1 el kell kezdeni
    }
    for (int i = 0; i; i++) // Ciklus nincs megadva, hogy meddig menjen
    {
        std::cout << "Ertek:" //nincs az érték kiírva + sts::endl hianyzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs neki érték adva
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] // ; hiányzik
    }
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

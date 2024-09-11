#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // NELEMENTS hibásan van írva
    std::cout << "1-100 ertekek duplazasa" << std::endl; //Hibás string zárójelbe foglalás
    for (int i = 0; i < N_ELEMENTS; i++) // Ciklusnak a feltétel hiányos
    {
        b[i] = (i + 1) * 2; // i+1 el kell kezdeni
    }
    for (int i = 0; i < N_ELEMENTS; i++) // Ciklus nincs megadva, hogy meddig menjen
    {
        std::cout << "Ertek: " << b[i] << std::endl; //nincs az érték kiírva + sts::endl hianyzik
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // nincs neki érték adva
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i]; // ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Szeretlek " << atlag << std::endl;
    return 0;
}

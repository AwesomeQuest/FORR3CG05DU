// gogn_aefingaverkefni_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "RadadurListi.h"

int main()
{
    RadadurListi listiA;
    //                 id, numer
    listiA.setjaILista(30, 40);
    listiA.setjaILista(10, 20);
    listiA.setjaILista(20, 30);
    cout << "Listi 1:" << endl;
    listiA.prentaLista();

    RadadurListi listiB = listiA;

    listiA.setjaILista(40, 0);
    cout << "Listi 2:" << endl;
    listiB.prentaLista();

    cout << "asdf";
    // listiB ætti ekki að innihalda 40 stakið

    // bæta við prófunum fyrir samanburðarvikjana



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

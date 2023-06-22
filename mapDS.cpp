#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // map automatically assending order
    map<string, string> myDictionary;

    myDictionary.insert(pair<string, string>("apple", "Apple"));
    myDictionary.insert(pair<string, string>("banana", "kesel"));
    myDictionary.insert(pair<string, string>("orange", "thabili, dodam"));

    myDictionary["banana"] = "cesel"; // replace

    for (auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }
}
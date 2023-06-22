#include<iostream>
#include<map>
#include<string>
#include<list>

using namespace std;

int main(){
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks{"thunder shock", "tail whip","quick attact"};
    list<string> charmanderAttacks{"flame throer", "scary face"};
    list<string> chickeritauAttacks{"razor leaf", "poison powder"};

    pokedex.insert(pair<string, list<string>>("Pikachu",pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander",charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("Chickeritau",chickeritauAttacks));
}
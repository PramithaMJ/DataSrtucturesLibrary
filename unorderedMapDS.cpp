#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    // unordered map not ordered
    unordered_map<string, string> myDictionary;

    myDictionary.insert(pair<string, string>("apple","Apple"));
    myDictionary.insert(pair<string, string>("banana","kesel"));
    myDictionary.insert(pair<string, string>("orange","thabili, dodam"));

    for(auto pair: myDictionary){
        cout<<pair.first<<" - "<<pair.second<<endl;
    }


}
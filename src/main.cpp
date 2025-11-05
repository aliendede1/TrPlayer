#include <SFML/Audio/Music.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
#include <string>
#include <thread>
#include <map>
#include "../libs/MusicLib/MusicLib.h"
using namespace std;

int main(){
    string noem;
    int menu;
    cout << "- | 1 | Tocar - " << endl;
    cout << "- | 3 | Sair - " << endl;
    cin >> menu;
    switch (menu) {
        case 1: {
            cout << "Nome da musica? \n";
            cin >> noem;
            MusicLib::tocar_music(noem);
        }
    }

    return  0;
}

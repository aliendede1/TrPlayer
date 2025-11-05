#include <SFML/Audio/Music.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
#include <string>
#include <thread>
#include <map>
#include "../libs/MusicLib/MusicLib.h"
using namespace std;

int main(){
    string NomeMusica;
    int menu;
    cout << "- | 1 | Tocar - " << endl;
    cout << "- | 2 | Repetir - " << endl;
    cout << "- | 3 | Sair - " << endl;
    cin >> menu;
    switch (menu) {
        case 1: {
            cout << "Nome da musica? \n";
            cin >> NomeMusica;
            MusicLib::tocar_music(NomeMusica);
            break;
        }
        case 2: {
            cout << "Nome da musica?" << endl;
            cin >> NomeMusica;
            MusicLib::repetir_music(NomeMusica);
        }
    }

    return  0;
}

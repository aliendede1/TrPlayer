#include <SFML/Audio/Music.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
#include <string>
#include <thread>
using namespace std;

void music_verfic(){
    int b = -1;
    string verificar = "a.mp3";
    if (verificar.find(".mp3") != string::npos){
        b = 1;
    }
}

void tocar_music(){
    int c = 1;
    sf::Music tocar;
    if (!tocar.openFromFile("music/test.mp3")){
        cerr << "erro" << endl;
        return;
    }

    tocar.play();
    cout << "Tocando música\n";
    while (tocar.getStatus() == sf::Music::Playing)
        sf::sleep(sf::milliseconds(100));
}

int main(){
    int v;
    cout << " - Incial - " << endl;
    cout << " - | 1 | Tocar " << endl;
    cout << " - | 2 | Sair " << endl;
    cin >> v;
    switch (v) {
        case 1: {
            thread t(tocar_music);
            t.join();
            t.detach();
            break;
            }
        default:
        cout << "Sair" << endl;
    }
    return 0;
}

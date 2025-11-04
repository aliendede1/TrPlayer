#include <SFML/Audio/Music.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
#include <string>
#include <thread>
#include <map>
#include "../lbs/MusicLib/MusicLib.h"
using namespace std;

int main(){
    string noem;
    cout << "Nome da musica? \n";
    cin >> noem;
    MusicLib::tocar_music(noem);

    return  0;
}

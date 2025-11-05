#ifndef Music_Lib
#define Music_Lib

#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <filesystem>

namespace MusicLib {

    // Verifica se o arquivo tem extensão .mp3
    bool music_verificar(const std::string& file_music);

    // Toca música até terminar
    void tocar_music(const std::string& file_music);

    void repetir_music();

}

#endif


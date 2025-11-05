#include "MusicLib.h"
#include <SFML/Audio/Music.hpp>
#include <iostream>
#include <string>

namespace MusicLib {

    bool music_verificar(const std::string& file_music) {
        return (file_music.find(".mp3") != std::string::npos);
    }

    void tocar_music(const std::string& file_music) {
        if (!music_verificar(file_music)) {
            std::cerr << "Arquivo inválido: " << file_music << std::endl;
            return;
        }

        sf::Music tocar;
        if (!tocar.openFromFile(file_music)) {
            std::cerr << "Não foi possível abrir a música: " << file_music << std::endl;
            return;
        }

        tocar.play();
        std::cout << "Tocando: " << file_music << std::endl;
        std::cout << "Para parar aperte: Crtl + C " << std::endl;

        while (tocar.getStatus() == sf::Music::Playing) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }

        std::cout << "Finalizado" << std::endl;
    }

    void repetir_music(const std::string& file_music){
        if (!music_verificar(file_music)) {
            std::cerr << "Arquivo inválido: " << file_music << std::endl;
            return;
        }

        sf::Music repetir;
        if (!repetir.openFromFile(file_music)) {
            std::cerr << "Não foi possível abrir a música: " << file_music << std::endl;
            return;
        }
        repetir.setLoop(true);
        repetir.play();
        std::cout << "Tocando: " << file_music << std::endl;
        std::cout << "Para parar aperte: Crtl + C " << std::endl;

        while (repetir.getStatus() == sf::Music::Playing) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }

        std::cout << "Repetindo" << std::endl;
    }

}


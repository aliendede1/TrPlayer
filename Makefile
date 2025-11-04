a:
	g++ src/main.cpp -o build/cmusic -std=c++17 -lsfml-audio -lsfml-system

clean:
	rm build/cmusic

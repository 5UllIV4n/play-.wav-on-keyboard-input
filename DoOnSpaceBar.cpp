#include <iostream>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

using namespace std;

#define KEY_SPACE ' '

// put your .wav file in the same directory.

int main() {
    while (true) {
        char key = getch();

        if (key == KEY_SPACE) {
            std::cout << "Playing...\n";
            PlaySound(TEXT("Your_File.wav"), NULL, SND_FILENAME | SND_SYNC);
            std::cout << "Ending now...\n";
        }
    }
    return 0;
}   
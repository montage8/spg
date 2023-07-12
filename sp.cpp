#include <iostream>
#include <cstdlib>
#include <ctime>
#include "framework.h"
#include "sp.h"
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

#define MAX_LOADSTRING 100

ATOM MyRegisterClass(HINSTANCE hInstance);
BOOL InitInstance(HINSTANCE, int);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow) {
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    PlaySound(TEXT("spl.wav"), NULL, SND_FILENAME | SND_SYNC);

    srand(time(0));
    int num1 = rand() % 30 + 1;
    int num2 = rand() % 30 + 1;
    std::cout << num1 << " times " << num2 << " equals to?\n";
    int answer;
    std::cin >> answer;
    if (answer == num1 * num2) {
        std::cout << "Correct!" << std::endl;
    } else {
        std::cout << "Incorrect. The correct answer is " << num1 * num2 << "." << std::endl;
    }

    PlaySound(TEXT("spe.wav"), NULL, SND_FILENAME | SND_SYNC);

    // TODO: Insert the rest of your Windows application code here.

    return 0;
}
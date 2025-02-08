#include <windows.h>

int main() {

	HWND hWnd = GetConsoleWindow(); 
    	ShowWindow(hWnd, SW_HIDE); 

    keybd_event(0x5B, 0, 0, 0);
    Sleep(200);

    keybd_event(0x10, 0, 0, 0);
    Sleep(200);

    keybd_event(0x53, 0, 0, 0);
    Sleep(200);
    keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0);

    keybd_event(0x10, 0, KEYEVENTF_KEYUP, 0);

    keybd_event(0x5B, 0, KEYEVENTF_KEYUP, 0);

    return 0;
}

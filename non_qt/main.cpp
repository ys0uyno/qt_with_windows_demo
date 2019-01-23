#include <iostream>
#include <Windows.h>

#define WM_QT_MSG_0 WM_USER + 1001

int main()
{
    HWND hwnd = FindWindowA(nullptr, "qt_msg");
    if (hwnd) {
        SendMessageA(hwnd, WM_QT_MSG_0, 0, 0);
    }
    else {
        std::cout << "cannot find window qt_msg" << std::endl;
    }

    HANDLE h = CreateEventA(nullptr, FALSE, FALSE, "_qt_event_");
    if (h) {
        SetEvent(h);
        CloseHandle(h);
    }

    return 0;
}

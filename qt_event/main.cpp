#include <QCoreApplication>
#include <Windows.h>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    HANDLE h = CreateEventA(nullptr, FALSE, FALSE, "_qt_event_");
    if (h) {
        WaitForSingleObject(h, INFINITE);
        std::cout << "get event: _qt_event_" << std::endl;
        CloseHandle(h);
    }

    return a.exec();
}

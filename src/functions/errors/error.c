#include <stdio.h>
#include <windows.h>
#include <stdio.h>
#include <amvideo.h>
#include <amaudio.h>
#include <math.h>

void handleError(const char* msg) {
    DWORD errorCode = GetLastError();
    LPVOID lpMsgBuf;
    FormatMessage(
        FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL,
        errorCode,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        (LPWSTR)&lpMsgBuf,
        0, NULL);
    wprintf(L"%S: %S\n", msg, (LPWSTR)lpMsgBuf);
    LocalFree(lpMsgBuf);
}

// handleError("error msg");

#include <windows.h>
#include <iostream>
using namespace std; // Add this line to use the std namespace
int main() {

    HANDLE hFile = CreateFile(
        "C:\\Users\\natkh\\OneDrive\\Desktop\\dsa\\Day2-60_graph_represent\\example.txt",  // Full file path
        GENERIC_READ | GENERIC_WRITE,  // Desired access
        0,  // Share mode
        NULL,  // Security attributes
        OPEN_EXISTING,  // Creation disposition (open existing file)
        FILE_ATTRIBUTE_NORMAL,  // Flags and attributes
        NULL  // Template file
    );

    if (hFile == INVALID_HANDLE_VALUE) {
        cout << "Failed to open file. Error: " << GetLastError() << endl;
        return 1;  // Exit with error code
    }

    // Text to be written to the file
    const char* text = "Jai Shree Ram , mera naam Manoj Singh Rawat hai , main uttarakhand se hun. Abhi mein operating system padha raha hun.";
    DWORD bytesWritten;

    // Write text to the file
    BOOL writeResult = WriteFile(
        hFile,                // Handle to file
        text,                 // Buffer containing data to write
        strlen(text),         // Number of bytes to write
        &bytesWritten,        // Number of bytes written
        NULL                  // Overlapped (for async I/O)
    );

    if (!writeResult) {
        cout << "Failed to write to file. Error: " << GetLastError() << endl;
    } else {
        cout << "Text written to file successfully!" << endl;
    }

    // Always remember to close the handle when you're done
    CloseHandle(hFile);

    return 0;
}

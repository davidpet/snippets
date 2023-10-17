#include <iostream>
#include <cstring>
#include <cwchar>

int main() {
    // Using char*
    const char* hello = "Hello";
    char world[] = ", World!";
    char combined[50];
    
    strcpy(combined, hello);
    strcat(combined, world);
    std::cout << combined << std::endl;  // Expected: Hello, World!
    
    char str[] = "one,two,three";
    char* token = strtok(str, ",");
    while (token != nullptr) {
        std::cout << token << std::endl; // Expected: one, then two, then three
        token = strtok(nullptr, ",");
    }

    // Using wchar_t*
    const wchar_t* whello = L"Hello";
    wchar_t wworld[] = L", World!";
    wchar_t wcombined[50];

    wcscpy(wcombined, whello);
    wcscat(wcombined, wworld);
    std::wcout << wcombined << std::endl;  // Expected: Hello, World!

    wchar_t wstr[] = L"Hello,world,from,C++";
    wchar_t* ptr = nullptr;
    wchar_t* wtoken = wcstok(wstr, L",", &ptr);
    while (wtoken != nullptr) {
        wprintf(L"%ls\n", wtoken);  // It prints each token separated by comma
        wtoken = wcstok(nullptr, L",", &ptr);
    }

    return 0;
}

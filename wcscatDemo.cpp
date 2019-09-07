#include <iostream>
#include <cwchar>
using namespace std;

int main()
{
    wchar_t  dest[30];
    wchar_t src[30];
    wchar_t str1[] = L"Computer";
    wchar_t str2[] = L"Science";

    wcscpy(dest,L"GeeksForGeeks");
    wcscpy(src,L" is the best");

    wcscat(dest,src);
    //wprintf(L"%ls\n",dest);
    wcout << dest << endl;

    // Compare and print results
    wcout << L"Comparing " << str1 << L" and "
          << str2 << L" = " << wcscmp(str1, str2) << endl;

    // Compare and print results
    wcout << L"Comparing " << str2 << L" and "
          << str2 << L" = " << wcscmp(str2, str2) << endl;

    // Compare and print results
    wcout << L"Comparing " << str2 << L" and "
          << str1 << L" = " << wcscmp(str2, str1) << endl;

    wcout << "Computer length: "<< wcslen(str1) << endl;

    return 0;
}

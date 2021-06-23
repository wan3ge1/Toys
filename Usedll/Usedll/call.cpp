#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	HINSTANCE hInstance = LoadLibrary(L"Dlldemo.dll");
	void(*Hello)(wstring, wstring) = (void(*)(wstring, wstring))GetProcAddress(hInstance, "Hello");
	Hello(L"Django", L"Talk is cheap, show me the code.");
	FreeLibrary(hInstance);
	return 0;
}

#include <Windows.h>

char windowClassName[] = "Hello World in C";
char windowCaption[] = "Hello World in C";

int main()
{
	int windowWidth = 640;
	int windowHeight = 480;

	HINSTANCE hInstance = GetModuleHandle(NULL);
	CreateWindow(windowClassName, windowCaption, WS_OVERLAPPED, 960 - windowWidth, 540 - windowHeight, windowWidth, windowHeight, NULL, NULL, hInstance, NULL);

	//CreateWindowEx(); // extended window styles.
	return 0;
}

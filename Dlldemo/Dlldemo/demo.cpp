#include "demo.h"

void Hello(wstring strCaption, wstring strContent)
{
	MessageBox(NULL, strContent.c_str(), strCaption.c_str(), MB_OK);
}

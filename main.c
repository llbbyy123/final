#include "graphics.h"
#include "extgraph.h"
#include "genlib.h"
#include "simpio.h"
#include "conio.h"
#include "imgui.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include <windows.h>
#include <olectl.h>
#include <mmsystem.h>
#include <wingdi.h>
#include <ole2.h>
#include <ocidl.h>
#include <winuser.h>

void MouseEventProcess(int x, int y, int button, int event);

void display();
void erase();
void Main()
{
	InitGraphics();
	InitConsole();
	registerMouseEvent(MouseEventProcess);
}
﻿#include <iostream>
#include <Windows.h>

#include "Base.h"
#include "Field.h"

#define UPDATE_FRAME gotoPoint()
#define GAMELOOP while(true)

void Blinking()
{
    void* handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(handle, &structCursorInfo);
    structCursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(handle, &structCursorInfo);
}

int main()
{
    std::cout << "\033]2;Game\007";
    Blinking();

    int length = 25, 
        width = 25;
    
    Field field(length, width, 'T');
    Base base(length, width);
    Player player;

    GAMELOOP 
    {   
        field.draw();

        player.draw();
        base.draw();
        base.shop(player);

        player.controller();
        UPDATE_FRAME;
    }
    return 0;
}

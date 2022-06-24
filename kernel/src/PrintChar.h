#pragma once
#include "kernel.h"
#include "math.h"

class PrintChar{
    public:
    PrintChar(Framebuffer* fb, FONT* font);
    Coordinates CharPosition;
    Framebuffer* fb;
    FONT* font;
    unsigned int color;

    void Print(const char* str);
    void Char(char chr, unsigned int xOff, unsigned int yOff);
};
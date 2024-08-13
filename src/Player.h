#pragma once
#include "Object.h"

class Player : public Object
{
private:
    const int screenWIDTH = 480;
    const int screenHEIGHT = 650;
    int animationFrame = 0;

    double gravity = 0.2;
    double jumpHeight = -6;
    double Ypos = 256;
    double accelerator = 0;
    double currentJumpTimer;
    double lastJumpTimer = 0;
    bool jumpState;

public:
    void Update();
    bool isJumping();
    void Jump();
    void Gravity();
};
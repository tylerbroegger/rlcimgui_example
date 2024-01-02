/*******************************************************************************************
*
*   raylib game template
*
*   <Game title>
*   <Game description>
*
*   This game has been created using raylib (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2021 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "include/raylib.h"
#define  CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include "include/cimgui.h"
#include "include/rlImGui.h"

//----------------------------------------------------------------------------------
// Main entry point
//----------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //---------------------------------------------------------
    InitWindow(1200, 800, "ImGui In C");
    SetTargetFPS(60);       // Set our game to run at 60 frames-per-second

    rlImGuiSetup(true);

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();
        ClearBackground(GRAY);

        rlImGuiBegin();

        igShowDemoWindow(NULL);
        rlImGuiEnd();

        EndDrawing();
    }
    rlImGuiShutdown();

    CloseWindow();          // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

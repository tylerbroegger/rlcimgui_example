#include "include/raylib.h"
#define  CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include "include/cimgui.h"
#include "include/rlImGui.h"

 #define GRUV_BG (Color){ 40, 40, 40, 255 }

int main(void)
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(1280, 720, "ImGui In C");
    SetTargetFPS(60);
    rlImGuiSetup(true);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(GRUV_BG);
        rlImGuiBegin();

        igShowDemoWindow(NULL);

		if (igBeginMainMenuBar()) {
			if (igBeginMenu("File", true)) {
				if (igMenuItem_Bool("Open", "Ctrl+O", false, true)) {}
				if (igMenuItem_Bool("Save", "Ctrl+S", false, true)) {}
				if (igMenuItem_Bool("Close", "Ctrl+Q", false, true)) {}
				igEndMenu();
			}
			if (igBeginMenu("Edit", true)) {
				if (igMenuItem_Bool("Open", "Ctrl+O", false, true)) {}
				if (igMenuItem_Bool("Save", "Ctrl+S", false, true)) {}
				if (igMenuItem_Bool("Close", "Ctrl+Q", false, true)) {}
				igEndMenu();
			}
			igEndMainMenuBar();
		}


        rlImGuiEnd();
        EndDrawing();
    }
    rlImGuiShutdown();
    CloseWindow();
    return 0;
}

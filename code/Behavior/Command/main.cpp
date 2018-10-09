#include "DrawCanvas.h"
#include "DrawCommand.h"
int main()
{
    MacroCommand macroCommand;
    DrawCanvas canvas(&macroCommand);
    macroCommand.addCommand(new DrawCommand(1, 2, &canvas));
    canvas.draw(20, 10);
    canvas.paint();
    return 0;
}
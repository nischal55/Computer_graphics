#include <graphics.h>
#include <stdio.h>

void drawEllipse(int xc, int yc, int a, int b) {
    int x = 0, y = b;
    int p1 = b * b - a * a * b + 0.25 * a * a;

    // Region 1
    while (2 * (b * b * x) < 2 * (a * a * y)) {
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);

        x++;

        if (p1 < 0)
            p1 = p1 + 2 * b * b * x + b * b;
        else {
            y--;
            p1 = p1 + 2 * b * b * x - 2 * a * a * y - b * b;
        }
    }

    // Region 2
    int p2 = b * b * (x + 0.5) * (x + 0.5) + a * a * (y - 1) * (y - 1) - a * a * b * b;

    while (y >= 0) {
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);

        y--;

        if (p2 > 0)
            p2 = p2 - 2 * a * a * y + a * a;
        else {
            x++;
            p2 = p2 + 2 * b * b * x - 2 * a * a * y + a * a;
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int xc = 200, yc = 200; // Center of the ellipse
    int a = 100, b = 50;    // Semi-major and semi-minor axes

    drawEllipse(xc, yc, a, b);

    delay(5000);
    closegraph();
    return 0;
}

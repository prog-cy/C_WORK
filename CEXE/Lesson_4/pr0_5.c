// program to convert RGB values in CMYK
#include <stdio.h>
#include <rupesh.h>

int main()
{
    float R, G, B, W; // RGBW stands for red, green, blue, white
    float C, M, Y, k; // CMYk stands for cyan, magenta, yellow, Black
    printf("Enter RGB color values\n");
    R = inputFloat();
    G = inputFloat();
    B = inputFloat();
    if ((R >= 0 && R <= 255) && (G >= 0 && G <= 255) && (B >= 0 && B <= 255))
    {
        if(R>B && R>G)
            W = R/255;
        else if(G>R && G>B)
            W = G/255;
        else if(B>R && B>G)
            W = B/255;
        else
            W = R/255;
        
        C = (W - R / 255) / W;
        M = (W - G / 255) / W;
        Y = (W - B / 255) / W;
        k = 1 - W ;
        if ((C >= 0.0 && C <= 1.0) && (M >= 0.0 && M <= 1.0) && (Y >= 0.0 && Y <= 1.0) && (k >= 0.0 && k <= 1.0))
            printf("CMYk = %.1f %.1f %.1f %.1f\n", C, M, Y, k);
        else
            printf("CMYk = %d %d %d %d", 0, 0, 0, 1);
        
        
    }

    else
    {
        printf("RBG values are out of range\n");
    }

    return 0;
}
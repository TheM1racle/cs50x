#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            unsigned int new_value = round(((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0));
            image[i][j].rgbtRed = new_value;
            image[i][j].rgbtGreen = new_value;
            image[i][j].rgbtBlue = new_value;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tepm_image;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width - 1 - j; j++)
        {

            tepm_image = image[i][j];
            image[i][j] = image[i][width - 1 -j];
            image[i][width - 1 - j] = tepm_image;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

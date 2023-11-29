#include "image.hpp"

int Image::interpolation(double x, double y) const
{
    int i = (int)x;
    int j = (int)y;
    double dx = x - i;
    double dy = y - j;
    return (1 - dx) * (1 - dy) * im[i][j] + dx * (1 - dy) * im[i + 1][j] +
           (1 - dx) * dy * im[i][j + 1] + dx * dy * im[i + 1][j + 1];
}

void Image::affiche() const
{
    for (int i = 0; i < im.nrows(); i++)
    {
        for (int j = 0; j < im.ncols(); j++)
        {
            std::cout << im[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Image::greyScale()
{
    for (int i = 0; i < im.nrows(); ++i)
    {
        for (int j = 0; j < im.ncols(); ++j)
        {
            int pixelValue = im[i][j];
            int modifiedValue = std::min(2 * std::abs(pixelValue - 128), 255);
            im[i][j] = modifiedValue;
        }
    }
}

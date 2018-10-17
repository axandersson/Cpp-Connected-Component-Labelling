#include <iostream>
#include "ConnectedComponentLabelling.h"

void printImg(const std::vector<bool>& img, const int nRows, const int nCols)
{
    for(int i = 0; i < nRows; i++)
    {
        for(int j = 0; j < nCols; j++)
        {
            std::cout << img[i * nCols + j] << '\t';
        }
        std::cout << std::endl;
    }
}

void printImg(const std::vector<int>& img, const int nRows, const int nCols)
{
    for(int i = 0; i < nRows; i++)
    {
        for(int j = 0; j < nCols; j++)
        {
            std::cout << img[i * nCols + j] << '\t';
        }
        std::cout << std::endl;
    }
}

int main()
{
    const int nRows = 4;
    const int nCols = 4;
    std::vector<bool> binaryImg(nRows*nCols,false);
    std::vector<int> labelledImg;
    binaryImg[0] = true;
    binaryImg[5] = true;
    binaryImg[6] = true;
    binaryImg[15] = true;

    std::cout << "Binary img: " << std::endl;
    printImg(binaryImg,nRows,nCols);
    ConnectedComponentLabelling::label(labelledImg,nRows,nCols,binaryImg);

    std::cout << std::endl << "Labelled img: " << std::endl;
    printImg(labelledImg,nRows,nCols);


    return 0;
}
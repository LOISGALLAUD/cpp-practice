#include "MyApp.h"

MyApp::MyApp(const string& imageRef_file, const string& image_file){
    this->imageRef = imageRef_file;
    this->image = image_file;
}

bool MyApp::refToMatrix(){
    ifstream file(this->imageRef);
    if (!file.is_open()) {
        cerr << "Could not open file: " << this->imageRef << endl;
        return false;
    }

    string magic;
    int m, n, maxGrayValue;

    file >> magic >> m >> n >> maxGrayValue; //premiere ligne contenant les valeurs importantes dont la taille de la matrice

    image = NRmatrix<double>(m, n); //créer une matrice de 0 de taille m x n

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int pixelValue;
            file >> pixelValue;
            image[i][j] = pixelValue;
        }
    }
    this->ImRef = image;

    return true;
}

bool MyApp::toMatrix(){
    ifstream file(this->image);
    if (!file.is_open()) {
        cerr << "Could not open file: " << this->image << endl;
        return false;
    }

    string magic;
    int m, n, maxGrayValue;

    file >> magic >> m >> n >> maxGrayValue; //premiere ligne contenant les valeurs importantes dont la taille de la matrice

    image = NRmatrix<double>(m, n); //créer une matrice de 0 de taille m x n

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int pixelValue;
            file >> pixelValue;
            image[i][j] = pixelValue;
        }
    }
    this->Im = image;

    return true;
}
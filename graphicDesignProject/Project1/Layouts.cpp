#include "Layouts.h"

Layouts::Layouts()
{
}

Layouts::~Layouts()
{
}

void Layouts::readLayout(long fileNum, int Width, int Height, int Rectangles, Coordinates X1, Coordinates Y1, Coordinates X2, Coordinates Y2)
{
    vector<Coordinates>VecCoordinates; //vector of coordinates in groups of 4

    Coordinates temp; //copies struct Coordinates into temp

    ifstream fin; //input file stream name

    ofstream fout; //output file stream name

    string filename; //filename inputed by user

cout << "Enter the filename: " << endl;

cin >> filename;

    fin.open(filename);

while (fin >> fileNum)
{
    if (fileNum = 13572468)
    {
        fin >> Width;
        fin >> Height;
        fin >> Rectangles;
    }

else

cout << "File number not valid." << endl;

    for (int i = 0; i < rectangles; i++)
    {
        fin >> temp.X1;
        VecCoordinates.push_back(temp.X1);
        fin >> temp.Y1;
        VecCoordinates.push_back(temp.Y1);
        fin >> temp.X2;
        VecCoordinates.push_back(temp.X2);
        fin >> temp.Y2;
        VecCoordinates.push_back(temp.Y2);

        if (VecCoordinates[i] > height || VecCoordinates[i] > width)

        cout << "Invalid coordinates." << endl;
    }
}
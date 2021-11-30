#include "main.h"
using namespace std;

int main ()
{
    string givenA, givenB, givenC, iRoot1, iRoot2;
    double discriminant, imaginary;
    int a,b,c;
    double root1,root2;

    cout << "A:";
    cin >> givenA;
    cout << endl << "B:";
    cin >> givenB;
    cout << endl << "C:";
    cin >> givenC;

    a = stoi(givenA);
    b = stoi(givenB);
    c = stoi(givenC);

    discriminant = (b * b) - (4*a*c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt((b*b) - (4*a*c))) / (2*a);
        root2 = (-b - sqrt((b*b) - (4*a*c))) / (2*a);

        if ((a * (root1*root1) + (b*root1) + c) == 0)
        {
            cout << "Root 1 = " << root1;
        }
        if ((a * (root2*root2) + (b*root2) + c) == 0)
        {
            cout << "Root 2 = " << root2;
        }
    }
    else if (discriminant == 0)
    {
        root1 = b/(2*a);
        root2 = root1;

        if ((a * (root1*root1) + (b*root1) + c) == 0)
        {
            cout << "Root 1 = " << root1;
        }
        if ((a * (root2*root2) + (b*root2) + c) == 0)
        {
            cout << "Root 2 = " << root2;
        }
    }
    else if (discriminant < 0)
    {
        root1 = (0-b / (2*a));
        root2 = root1;
        imaginary = sqrt(-((b*b)-(4*a*c))) / (2*a);

        cout << "Root 1 = " << root1 << " + i" << imaginary << endl;
        cout << "Root 2 = " << root1 << " - i" << imaginary << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14159;
    int choice;
    float length, width, height, base, radius, area;
    
    cout << "1. Calculate the area of a Circle." << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit." << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    
    if (choice < 1 or choice > 4)
    {
        cout << "Error. Invalid selection. Terminating program."; 
        return 0;
    }
    else if (choice == 1)
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
            if (radius < 0)
            {
                cout << "Error. Invalid number. Terminating program.";
                return 0;
            }
        area = PI * radius * radius;
        cout << "The area is " << area << ".";
    }
    else if (choice == 2)
    {
        cout << "Enter the length: ";
        cin >> length;
            if (length < 0)
            {
                cout << "Error. Invalid number. Terminating program.";
                return 0;
            }
        cout << "Enter the width: ";
        cin >> width;
            if (width < 0)
            {
                cout << "Error. Invalid number. Terminating program.";
                return 0;
            }
        area = length * width;
        cout << "The area is " << area << ".";
    }
    else if (choice == 3)
    {
        cout << "Enter the base of the triangle: ";
        cin >> base;
            if (base < 0)
            {
                cout << "Error. Invalid number. Terminating program.";
                return 0;
            }
        cout << "Enter the height of the triangle: ";
        cin >> height;
            if (height < 0)
            {
                cout << "Error. Invalid number. Terminating program.";
                return 0;
            }
        area = base * height * 0.5;
        cout <<"The area is " << area << ".";
    }
        
    
    else if (choice == 4)
    {
        return 0;
    }

    return 0;
}
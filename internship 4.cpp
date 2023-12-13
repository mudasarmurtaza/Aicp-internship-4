#include<iostream>
#include<cmath>
using namespace std;

class Hexagon {
private:
    int side;

public:
    Hexagon(int side) : side(side) {}

    double calcArea() {
        return 1.5 * 1.732 * side;
    }

    double calcPeri() {
        return 6 * side;
    }

    double calcAngleSum() {
        return 6 * 120;
    }

    void display() {
       cout << "Hexagon -\n Area: " << calcArea() << ", \nPerimeter: " << calcPeri() << ",\n Sum of Angles: " << calcAngleSum() <<endl;
    }
};

class Square {
private:
    int side;

public:
    Square(int side) : side(side) {}

    double calcAreaSquare() {
        return pow(side, 2);
    }

    double calcPeriSquare() {
        return 4 * side;
    }

    void display() {
        cout << "Square -\n Area: " << calcAreaSquare() << ",\n Perimeter: " << calcPeriSquare() <<endl;
    }
};

int main() {
    // Extract last digit of CNIC
    int lastDigit;
    cout << "Enter the last digit of your CNIC: ";
    cin >> lastDigit;

    Hexagon hexagon(lastDigit);
    Square square(lastDigit + 1);

    int choice;
    do {
        cout << "Menu: \nEnter 1 to calculate area,parimeter and sum of angles of hexagon\nenter 2 to calculate area and parimeter of square.\nAny other key to exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hexagon.display();
                break;
            case 2:
                square.display();
                break;
            default:
                cout << "Exiting program.\n";
                break;
        }

    } while (choice == 1 || choice == 2);

    return 0;
}
#include <iostream>

class Rectangle {
private:
    // Private member variables
    double width;
    double length;

public:
    // Constructor to initialize default values
    Rectangle() {
        width = 1.0;
        length = 1.0;
    }

    // Parameterized constructor
    Rectangle(double w, double l) {
        setWidth(w);
        setLength(l);
    }

    // Setter for width (with basic validation)
    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            std::cout << "Invalid width! Setting to default (1.0).\n";
            width = 1.0;
        }
    }

    // Setter for length (with basic validation)
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            std::cout << "Invalid length! Setting to default (1.0).\n";
            length = 1.0;
        }
    }

    // Getter for width
    double getWidth() const {
        return width;
    }

    // Getter for length
    double getLength() const {
        return length;
    }

    // Function to calculate area
    double calculateArea() const {
        return width * length;
    }

    // Function to calculate perimeter
    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    std::cout << "=== Rectangle Object Demonstration ===\n\n";

    // 1. Create a rectangle using the default constructor
    Rectangle rect1;
    std::cout << "Rectangle 1 (Default):\n";
    std::cout << "Width: " << rect1.getWidth() << ", Length: " << rect1.getLength() << "\n";
    std::cout << "Area: " << rect1.calculateArea() << "\n";
    std::cout << "Perimeter: " << rect1.calculatePerimeter() << "\n\n";

    // 2. Create a rectangle using custom dimensions
    Rectangle rect2(5.0, 10.5);
    std::cout << "Rectangle 2 (Parameterized):\n";
    std::cout << "Width: " << rect2.getWidth() << ", Length: " << rect2.getLength() << "\n";
    std::cout << "Area: " << rect2.calculateArea() << "\n";
    std::cout << "Perimeter: " << rect2.calculatePerimeter() << "\n\n";

    // 3. Modify dimensions using setter functions
    std::cout << "--> Modifying Rectangle 2 dimensions...\n";
    rect2.setWidth(7.5);
    rect2.setLength(12.0);
    
    std::cout << "Rectangle 2 (Updated):\n";
    std::cout << "New Width: " << rect2.getWidth() << ", New Length: " << rect2.getLength() << "\n";
    std::cout << "New Area: " << rect2.calculateArea() << "\n";
    std::cout << "New Perimeter: " << rect2.calculatePerimeter() << "\n";

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    
    int total_slots, car_count = 0, bike_count = 0;
    system("CLS");
    cout << "Enter the total number of parking slots: ";
    cin >> total_slots;

    while (true) {
        
        int choice;
    
        cout << "\nWelcome to the car parking!\n";
        cout << "1. Park a car\n";
        cout << "2. Park a bike\n";
        cout << "3. View parking status\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
    
        cin >> choice;
        
        
        switch (choice) {
            case 1:
                if (car_count + 1 + bike_count <= total_slots) {
                    car_count++;
                    cout << "Car parked successfully.\n";
                } else {
                    system("CLS");
                    cout << "Sorry, no parking slots available.\n";
                }
                break;
            case 2:
                if (car_count + bike_count + 1 <= total_slots) {
                    bike_count++;
                    cout << "Bike parked successfully.\n";
                } else {
                    cout << "Sorry, no parking slots available.\n";
                }
                break;
            case 3:
                cout << "Total parking slots: " << total_slots << endl;
                cout << "Number of cars parked: " << car_count << endl;
                cout << "Number of bikes parked: " << bike_count << endl;
                cout << "Number of slots available: " << total_slots - car_count - bike_count << endl;
                break;
            case 4:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}

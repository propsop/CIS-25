#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

struct Patient {
    int id;
    string name;
    int age;
    string gender;
    string diagnosis;
};

bool comparePatients(const Patient& a, const Patient& b) {
    return a.id < b.id;
}

int binarySearch(Patient* arr, int size, int targetId) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid].id == targetId) {
            return mid;
        }
        if (arr[mid].id < targetId) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}


int main() {
    int count = 0;
    int maxPatients = 10;

    Patient* patients = new Patient[maxPatients];

    int option;

    for (int i = 0; i < maxPatients; ++i) {
        cout << "Hospital Patient System" << endl
            << "" << endl
            << "1. Add Patient" << endl
            << "2. Display Patients" << endl
            << "3. Search Patient" << endl
            << "4. Update Patient" << endl
            << "5. Save Patients" << endl
            << "6. Exit" << endl
            << "" << endl
            << "Enter Choice: ";
        cin >> option;
        cout << "" << endl;

        if (option == 1) {

            cout << "Enter Patient ID: " << endl;
            cin >> patients[i].id;
            cout << "Enter Name: " << endl;
            cin.ignore();
            getline(cin, patients[i].name);
            cout << "Enter Age: " << endl;
            cin >> patients[i].age;
            cout << "Enter Gender: " << endl;
            cin.ignore();
            getline(cin, patients[i].gender);
            cout << "Enter Diagnosis: " << endl;
            getline(cin, patients[i].diagnosis);

            cout << "Added Patient\n";
            count++;
            continue;
        }
        else {
            if (option == 2) {

                cout << "Patient Records" << endl
                    << "" << endl;
                for (int i = 0; i < maxPatients; i++) {
                    cout << "ID: " << patients[i].id << endl
                        << "Name: " << patients[i].name << endl
                        << "Age: " << patients[i].age << endl
                        << "Gender: " << patients[i].gender << endl
                        << "Diagnosis: " << patients[i].diagnosis << endl
                        << "" << endl;
                }
                continue;
               
            }

            int uservalue = 0;

            if (option == 3) {

                sort(patients, patients + maxPatients, comparePatients);

                cout << "Enter patient ID to search : ";
                cin >> uservalue;

                int resultIndex = binarySearch(patients, maxPatients, uservalue);
                
                if (resultIndex != -1) {
                    cout << "\nPatient Found!" << endl;
                    cout << "Name: " << patients[resultIndex].name << endl;
                    cout << "Age: " << patients[resultIndex].age << endl;
                    cout << "Diagnosis: " << patients[resultIndex].diagnosis << endl;
                    cout << "" << endl;
                }
                else {
                    cout << "\nPatient with ID " << uservalue << " not found." << endl;
                }
                continue;
            }
            if (option == 4) {
                sort(patients, patients + maxPatients, comparePatients);
                cout << "Enter patient ID to update: ";
                cin >> uservalue;

                int resultIndex = binarySearch(patients, maxPatients, uservalue);

                if (resultIndex != -1) {
                        cout << "\nEnter New Diagnosis: ";
                        cin >> patients[resultIndex].diagnosis;
                        continue;
                    }

            }
            if (option == 5) {
            
                ofstream file("patients.txt", fstream::app);
                if (file.is_open())
                    for (int i = 0; i < maxPatients; i++)
                        file << patients[i].id << " " << patients[i].name<< " " << patients[i].age<< " " << patients[i].gender<< " " << patients[i].diagnosis << endl;
                cout << "Saved Patients to File";
                continue;
            }
            if (option == 6) {
                cout << "Good Bye!" << endl;
                break;
            }
        }

        delete[] patients;

        return 0;

    }
}
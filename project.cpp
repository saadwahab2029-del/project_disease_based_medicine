#include <iostream>
using namespace std;

void showMedicine(int choice) {

string feverMedicines[3]   = {"Panadol", "Brufen", "Calpol"};  
string coughMedicines[3]   = {"Benylin", "Syrup", "Vicks"};  
string painMedicines[3]    = {"Diclofenac", "Ibuprofen", "Aspirin"};  
string allergyMedicines[3] = {"Loratadine", "Cetirizine", "Fexofenadine"};  

int i;  

if (choice == 1) {  
    cout << "\nMedicines for Fever:\n";  
    for (i = 0; i < 3; i++) {  
        cout << feverMedicines[i] << endl;  
    }  
}  
else if (choice == 2) {  
    cout << "\nMedicines for Cough:\n";  
    for (i = 0; i < 3; i++) {  
        cout << coughMedicines[i] << endl;  
    }  
}  
else if (choice == 3) {  
    cout << "\nMedicines for Pain:\n";  
    for (i = 0; i < 3; i++) {  
        cout << painMedicines[i] << endl;  
    }  
}  
else if (choice == 4) {  
    cout << "\nMedicines for Allergy:\n";  
    for (i = 0; i < 3; i++) {  
        cout << allergyMedicines[i] << endl;  
    }  
}  
else {  
    cout << "\nInvalid choice!";  
}

}

int main() {

int choice;  

cout << "Disease-Based Medicine Organization System\n";  
cout << "-----------------------------------------\n";  
cout << "1. Fever\n";  
cout << "2. Cough\n";  
cout << "3. Pain\n";  
cout << "4. Allergy\n";  
cout << "Enter your choice: ";  
cin >> choice;  

showMedicine(choice);  

cout << "\nThank you!";  
return 0;

}

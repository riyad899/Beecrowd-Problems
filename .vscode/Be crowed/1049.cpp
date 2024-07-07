#include<iostream>
#include<string>
using namespace std;

int main() {
    string x, y, z;
    cin >> x >> y >> z;

    if (x == "vertebrado") { // Check if the first string is "vertebrado"
        if (y == "ave") { // Check if the second string is "ave"
            if (z == "carnivoro") { // Check if the third string is "carnivoro"
                cout << "aguia" << endl;
            } else if (z == "onivoro") { // Check if the third string is "onivoro"
                cout << "pomba" << endl;
            }
        } else if (y == "mamifero") { // Check if the second string is "mamifero"
            if (z == "onivoro") { // Check if the third string is "onivoro"
                cout << "homem" << endl;
            } else if (z == "herbivoro") { // Check if the third string is "herbivoro"
                cout << "vaca" << endl;
            }
        }
    }

    return 0;
}

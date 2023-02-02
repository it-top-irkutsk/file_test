#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    system("chcp 65001");

    ifstream file_input;
    file_input.open(R"(J:\Temp\web02\script.js)");

    ofstream file_output;
    file_output.open("script.bak", ios_base::trunc);

    string line;

    if (file_input.is_open() && file_output.is_open()) {
        cout << "Файл открылся" << endl;

        while (getline(file_input, line)) {
            file_output << line << endl;
        }

    } else {
        cout << "Файл не открылся" << endl;
    }

    file_input.close();
    file_output.close();

    return 0;
}

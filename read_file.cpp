#include <iostream>
#include<string>
#include <fstream> // Required for file stream operations
using namespace std;
bool flag=0;

void read_file(string fileName){
    ifstream inputFile(fileName); // Replace with file's name

    if (!inputFile.is_open()) {
       cerr << "Failed to open the file." << endl;
       
    }
    char byte;
    while (inputFile.read(&byte, sizeof(byte))) {
        //std::cout << static_cast<int>(byte) << " ";
        flag=1;
    }
    if(flag==1)  cout<<"byte code read successfully";

    inputFile.close();
}

int main() {
    read_file("SPL1 Project Proposal Final 1450.pdf");
}

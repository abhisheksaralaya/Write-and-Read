//
//  main.cpp
//  Write and Read
//
//  Created by Apple on 03/06/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write(string data, string fileName, string extension);

int main(int argc, const char * argv[]) {
    cout << "Writing to the file" << endl;
    cout << "Enter what text you want to enter in the file: ";
    string data;
    std::getline(cin, data, '\n');
    string fileName;
    string extension;
    cout << "Enter FileName:";
    cin >> fileName;
    cout << "Enter Extension:";
    cin >> extension;
    write(data, fileName, extension);
    return 0;
}

void write(string data, string fileName, string extension){
    
    // open the file in write mode.
    ofstream outfile;
    string fullName = fileName + "." + extension;
    
    outfile.open(fullName);
    
    // write the input data into the file.
    outfile << data << endl;
    
    // close the file.
    outfile.close();
}

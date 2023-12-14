#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream ifs;
    ofstream ofs;

    ifs.open("input.txt");
    ofs.open("output.txt", ofstream::out);
    
    string s = "";
    string output = "";

    while(!ifs.eof()) {
        getline(ifs,s);
        for( int i = 0; i < s.size(); i++) {
            if( output.size() != 3) {
                output += s[i];
            }
            else {
                ofs << output << endl;
                output = "";
                output += s[i];
            }
        }
    }
    if(output.size()) ofs << output;

    ifs.close();
    ofs.close();

    return 0;
}
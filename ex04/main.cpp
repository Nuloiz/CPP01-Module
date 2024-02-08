#include <string>
#include <iostream>

int main(std::string filename, std::string s1, std::string s2){
    std::ifstream   inf(filename,);
    std::ofstream   outf(filename + ".replace");
    std::string     string;
    int ls1;
    int pos = -1;
    int i = 0;
    if (!inf){
        std::cout << "Invalid Filename\n";
        return (0);
    }
    std::getline(inf, string);
    ls1 = s1.length();
    while (string[++pos + ls1]){
        if (&string[pos].compare(ls1, s2)){
            outf << string.substr(&string[pos], i) << s2;
            i = 0;
            pos += ls1;
        }
        else
            i++;
    }
    return (1);
}
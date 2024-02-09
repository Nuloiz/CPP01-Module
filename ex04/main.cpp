#include <string>
#include <iostream>
#include <fstream>

void replace(std::string filename, std::string s1, std::string s2){
    std::ifstream   inf(filename.c_str());
    std::ofstream   outf(filename.append(".replace").c_str());
    std::string     string;
    std::string     tmp;
    int ls1;
    int pos = -1;
    int i = 0;
    if (!inf){
        std::cout << "Invalid Filename\n";
        return ;
    }
    while (std::getline(inf, tmp))
        string.append(tmp + "\n");
    ls1 = s1.length();
    while (string[(++pos + ls1)]){
        if (!string.compare(pos, ls1, s1)){
            outf << string.substr(i, pos - i);
            outf << s2;
            pos += ls1 - 1;
            i = pos + 1;
        }
    }
    outf << string.substr(i, pos - i);
    inf.close();
    outf.close();
}

int main(int argc, char **argv){
    if (argc != 4){
        std::cout << "Invalid number of arguments\n";
        return (1);
    }
    replace(argv[1], argv[2], argv[3]);
    return (0);
}
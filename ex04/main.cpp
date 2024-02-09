#include <string>
#include <iostream>

void replace(std::string filename, std::string s1, std::string s2){
    std::ifstream   inf(filename);
    std::ofstream   outf(filename + ".replace");
    std::string     string;
    int ls1;
    int pos = -1;
    int i = 0;
    if (!inf){
        std::cout << "Invalid Filename\n";
        return ;
    }
    std::getline(inf, string);
    ls1 = s1.length();
    while (string[(++pos + ls1)]){
        if (string.compare(pos, ls1, s2)){
            outf << string.substr(&(string[pos]), i) << s2;
            i = 0;
            pos += ls1;
        }
        else
            i++;
    }
    return ;
}

int main(int argc, char **argv){
    if (argc != 4){
        std::cout << "Invalid number of arguments\n";
        return (1);
    }
    replace(argv[1], argv[2], argv[3]);
    return (0);
}
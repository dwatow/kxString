#include <iostream>
#include <fstream>
#include <vector>
#include "kxTxtFile.h"

using namespace std;

int main()
{
    kxTxtFile ifile;

    if (!ifile.Open("D:\\GitHub\\kxString\\testFile.txt"))
        std::cout << "read error" << std::endl;

    std::vector<string> vstr;
    ifile.oTxtData(vstr);
    ifile.Close();

    for (std::vector<std::string>::iterator it = vstr.begin(); it != vstr.end(); ++it)
        std::cout << *it << std::endl;  

    kxTxtFile ofile;

    if (!ofile.Save("D:\\GitHub\\kxString\\testFile2.txt"))
        std::cout << "save error" << std::endl;
    
    ofile.iTxtData(vstr);

    ofile.Close();
    return 0;
}
/*

*/
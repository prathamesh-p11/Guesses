#include <iostream>
#include <fstream>
#include <string>

void ReadAndPrint()
{
    std::ifstream file;
    std::string word, filename;
    filename = "words_alpha.txt";
    file.open(filename.c_str());
    
    std::ofstream op;
    op.open("Guesses.txt");
    // extract words and insert in new file 
    while (file >> word && word[0] <= 'e' )
    {
        op << word <<"\n";
    }
}
int main()
{
	ReadAndPrint();
	return 0;
}
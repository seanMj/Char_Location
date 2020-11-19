#include "char_pos.cpp"
#include <iostream>
#include <string>
using std::string;
#include <vector>
void char_pos(std::vector<char>& alphabet, std::string& filename, int& alpha_count);

int main()
{
	std::vector<char> alphabet {'a','b','c','d','e','f','g','h','i','j','k',
                 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	string str = "main.cpp";
	int alpha_count = 0;

	for(int i = 1; i <= alphabet.size(); ++i)
	{
		char_pos(alphabet,str, alpha_count);
		alpha_count = i;
	}
}

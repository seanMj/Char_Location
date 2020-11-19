#include <fstream>
#include <iostream>
#include <vector>
#include <cctype>
#include <string>
//..
using std::endl;	using std::cout;
void char_pos(std::vector<char>& alphabet, std::string& filename, int& alpha_count)
{
	std::ifstream file;					//open a object named "file" from the class fstream
	file.open(filename);				//use the "file" handle to open a file from the filesystem	

	std::string temp = " ";				//temp. string (group of characters to hold the filename the user provides from main
	int a_cnt = 0;						//a_cnt is used to hold the current count location.
	int cnt = 0;						//count is used to find the location for the current letter being searched for

	while(getline(file, temp))					//read until the end of the file, while not at end of file, place each word in temp
	{
		for(auto& i : temp)						//go through the word [w] [o] [r] [d] one letter at a time 
		{
			if(isupper(i))						//if the letter is uppercase, make lowercase
				i = tolower(i);					//the letter was uppercase, its now lowercase 
			if(alphabet[alpha_count] == i)		//if the current letter in the vector is equal to the one were looking at
			{
				a_cnt = cnt;												//update the value of a_cnt with the new location of the character
				cout << alphabet[alpha_count] << ' ' << a_cnt << '\n';		//print the result of the char and location
			}
			cnt += 1;		//increment the value of cnt with 1 each loop to update the next location
							//...should it be found
		}
	}
}

//here is an example of C++ I wrote today, just to give an idea of what computer science will look like.
//shows how easy/hard/fun it can be, and what can be gained from it. I did this because i had some idea of how the 
//data would look after it was graphed and i was correct it looks cool, its a fingerprint of text data in a weird way
//this is a rather complicated example here - not for children's eyes - this could scare a kid from
//programming ever again lol 

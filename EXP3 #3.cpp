#include <iostream>
#include <iterator>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    char word[10];
    int i;

    cout << "Enter a word: " ;
    cin >> word;

   for (size_t i = 0, i_end = std::strlen(word); i != i_end; ++i)
{
    std::cout << word[i_end - i - 1];
}

reverse_copy(word,word+strlen(word),ostream_iterator<char>(cout));
return 0;
}
    
    

    


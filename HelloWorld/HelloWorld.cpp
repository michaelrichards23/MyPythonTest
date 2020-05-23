#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   //This has no documentation but it doesn't need it
    vector<string> msg {"Hello MR 123", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

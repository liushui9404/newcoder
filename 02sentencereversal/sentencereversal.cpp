#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string sentence;
    while(getline(cin,sentence))
    {
        reverse(sentence.begin(),sentence.end());
        unsigned i = 0,j = 1;
        while(i<sentence.size())
        {
            while(i<sentence.size() && sentence[i] != ' ')
            {
                ++i;
            }
            reverse(sentence.begin()+j,sentence.begin()+i);
            j = ++i;
        }
        cout<<sentence<<endl;

    }
    return 0;
}

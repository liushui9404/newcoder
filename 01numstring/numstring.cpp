#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string int2str(int num) 
{
    stringstream ss;
    ss << num;
    return ss.str();
}

int main()
{
	int N;
	cin>>N;
    vector<string> v;
    int num;

    for(int i=0;i<N;i++)
    {
        cin>>num;
        v.push_back(int2str(num));
    }
    for (unsigned int i = 0; i < v.size()-1; i++) 
    {
        for (unsigned int j = 0; j < v.size()-i-1; j++) 
        {
            if ((v[j] + v[j+1]) < (v[j+1]+v[j])) 
            {
                swap(v[j], v[j+1]);
            }
        }
    }

    for (unsigned int i = 0; i < v.size(); i++) 
    {
        cout<<v[i];
    }
    return 0;
}

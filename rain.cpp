#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Welcome to the Business Sorting Program!" << endl;

    vector<string> b;
    bool contProg = true;
    while (contProg)
    {
        string temp;
        cout << endl << "Please enter the name of a business! : " << endl;
        getline(cin,temp);
        b.push_back(temp);

        sort(b.begin(), b.end());

        cout << endl << "Here are you businesses : " << endl << endl;

        for (int i = 0; i < size(b); i++)
        {
            cout << b[i] << endl;
        }

        string rsp1;
        cout << endl << "Add Another Business? : ";
        getline(cin,rsp1);
        cout << endl;

        string rsp2;
        for (int i = 0; i < rsp1.length(); i++)
        {
            rsp2 += tolower(rsp1[i]);
        }

        if (rsp2 != "yes" && rsp2 != "y")
        {
            contProg = false;
        }
    }

    cout << endl << "Thank You So Much For Using The Business Sorting Program!" << endl;

    

}
#include <iostream>
#include "deque"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    deque<char> Dcola1;
    deque<char> Dcola2;
    char a;
    cin.get(a);
    while(!cin.eof())
    {
        while(a != ' ')
        {
            Dcola1.push_back(a);
            cin.get(a);
        }

        cin.get(a);
        while (!cin.eof() && a != '\n')
        {
            Dcola2.push_back(a);
            cin.get(a);
        }

        bool seguir = true, all = false;

        while (seguir == true && all != true && !Dcola1.empty() && !Dcola2.empty())
        {
            if (Dcola1.front() == Dcola2.front())
            {
                Dcola1.pop_front();
                Dcola2.pop_front();
            }

            else if (Dcola1.front() != Dcola2.front())
            {
                Dcola2.pop_front();
            }

           if (Dcola2.empty() == true) seguir = false;

           if (Dcola1.empty() == true) all = true;

        }

        if (all == true) cout << "Yes" << endl;
        else cout << "No" << endl;
        cin.get(a);
        Dcola1.clear();
        Dcola2.clear();
    }



    return 0;
}


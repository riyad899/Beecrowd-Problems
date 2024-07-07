#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a cherecter:";
    cin>>ch;
    switch (ch)
    {
    case 'a':
        cout << "vowel";
        break;
           case 'e':
        cout << "vowel";
        break;
           case 'i':
        cout << "vowel";
        break;
           case 'o':
        cout << "vowel";
        break;
   case 'u':
        cout << "vowel";
        break;
    default:
    cout<<"consonent";
        break;
    }
}
//signle steatement


   #include <bits/stdc++.h>
using namespace std;
int main()
{
     char ch;
    cout<<"Enter a cherecter:";
    cin>>ch;
    ch=tolower(ch);
    switch (ch)
    {
    case 'a':

           case 'e':
           case 'i':
           case 'o':
           case 'u':

        cout<<"vowel";
    default:
    cout<<"consonent";
        break;
    }
}

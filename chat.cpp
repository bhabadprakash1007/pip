#include<iostream>
#include<cstring>
using namespace std;

// string userinput()
// {
//     string input;
//     cout<<"You:";
//     cin>>input;
//     return input;
// }

string getresponse(string input)
{
    if(input=="hi" || input == "hello")
    {
       return"Hello ,! How i can help you!!!";
    }
    else if(input== "how are you")
    {
        return"well";
    }
    else if(input=="bye")
    {
        return"bye thank you";
    }
    else{
        return"i dont understand give more clearification";
    }
}

int main()
{
    string userinput;
    cout<<"Hii welcome To chatbot!!!";

    
    while(true)
    {
        cout<<"\nYou:";
        getline(cin, userinput); 

        for (auto &x : userinput)
        {
            x = tolower(x);
        }
      
        if(userinput=="bye")
        {
           // cout<<"Thank you";
            break;
        }
         cout<<"\nChatbot:"<<getresponse(userinput)<<endl;
         
    }
 return 0;
}




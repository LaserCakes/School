#include <iostream>

using namespace std;

class PrintStuff
{
public: //access stuff. Access specifiers always followed by colon :

  void message() //Function to display a message. Use lowercase for names
  {
    cout << "This message is in the class" << endl;
  }
}; //Need to end classes with semicolon

int main()
{
  cout << "Hello" << endl;
  PrintStuff newMessage; //creates the a new object. No color coding, I know...
  newMessage.message(); //Calling the function within the class

  return 0;
}

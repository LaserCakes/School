#include <iostream>
#include <string>

using namespace std;

class Dog //Creates a class named Dog
{
public: //Acces set to public. Needs to end with a colon :

  void dogName(string name) //Function takes a string type variable called name
  {
    //name listed below is the variable that will be passed to the function
    cout << "Your new dog " << name << " is ready for pickup!" << endl;
  }
}; //Always end all classes with a semicolon

int main(void)
{
  string name; //Create a variable called name, different than the one in Dog class
  Dog newDog; //Creates a new Object of class Dog called newDog

  cout << "Please enter your dog's name: ";
  getline(cin, name); //Function from string library (up top) that takes the stream and a variable as arguments
  cout << endl;

  newDog.dogName(name); //Call the fuction inside my new object and pass it the new string created

  return 0;

}

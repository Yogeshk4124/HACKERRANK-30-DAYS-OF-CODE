#include <iostream>
#include<stdlib.h>
using namespace std;
class Person{
    public:
        int age;
      int t;
      int i;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
if(initialAge<0)
   {   cout<<"Age is not valid, setting age to 0.\n";
age=0;
}
else{
    age=initialAge;
}
    }

    void Person::amIOld(){    
        if(age<13)
    {
        cout<<"You are young.";
    }
    else if(age>=13 && age<18)
    {
        cout<<"You are a teenager.";
    }
    else 
        cout<<"You are old.";
        cout<<"\n";
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
age=age+1;
    }
int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}

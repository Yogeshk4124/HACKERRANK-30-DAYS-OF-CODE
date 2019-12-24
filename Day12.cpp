#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> ts;  
	public:
          Student(string f, string l, int i,vector<int> s):Person(f,l,i)
          {
              ts=s;
          }
            
              
          char calculate(){
            int a=0,j;
            for(j=0;j<ts.size();j++)
            {
                a+=ts[j];
            }
            a=a/ts.size();
            if(a>=90)
            return 'O';
            else if(a>=80)
            return 'E';
            else if(a>=70)
            return 'A';
            else if(a>=55)
            return 'P';
            else if(a>=40)
            return 'D';
            else
            return 'T'; 
        }
          /*
           *   Class Constructor
           *
           *   Parameters:
           *   firstName - A string denoting the Person's first name.
           *   lastName - A string denoting the Person's last name.
           *   id - An integer denoting the Person's ID number.
           *   scores - An array of integers denoting the Person's test scores.
           */
          // Write your constructor here

          /*
           *   Function Name: calculate
           *   Return: A character denoting the grade.
           */
          // Write your function here
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}

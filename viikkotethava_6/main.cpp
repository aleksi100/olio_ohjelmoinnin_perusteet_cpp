#include <iostream>
#include <vector>
#include "student.h"
#include <string>
using namespace std;
int main ()
{
    int selection =0;
    string nimi;
    int age;
    vector<Student>::iterator it;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout<<"Anna oppilaan nimi: ";
            cin.ignore();
            getline(cin, nimi);
            cout<<"\nAnna oppilaan ika: ";
            cin >> age;
            studentList.push_back(Student(nimi, age));
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for(auto it = studentList.begin(); it < studentList.end(); ++it){
                it->printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student &s1, Student &s2){
                return s1.getName() < s2.getName();
            });
            for(auto& student : studentList){
                student.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student &s1, Student &s2){
                return s1.getAge() < s2.getAge();
            });
            for(auto& student : studentList){
                student.printStudentInfo();
            }
            break;
        case 4:
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Nimi: ";
            cin.ignore();
            getline(cin, nimi);
            it = find_if(studentList.begin(), studentList.end(), [&](Student &s){
                return s.getName() == nimi;
            });
            if(it != studentList.end()){
                it->printStudentInfo();
            }else{
                cout << "Oppilasta ei löytynyt\n";
            }
            break;

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}

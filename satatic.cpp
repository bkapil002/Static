#include <iostream>
using namespace std;

class student{
    private:
    int Rollnumber;
    string name;
    static int studentCount;

    public:
    student(int r , string n ) : Rollnumber(r),name(n){
        studentCount++;
    }

    static int getStudentCount(){
        return studentCount;
    }
    void display(){
            cout<<"Rollnumber "<<Rollnumber<<endl;
            cout<<"Name "<<name<<endl;
     };
};

int student:: studentCount = 0;

int main(){
    student s1(101 , "brahm");
    student s2(102 , "kapil");

    s1.display();
    s2.display();

    cout<<"total number of students: "<< student:: getStudentCount()<<endl;

    return 0;
}
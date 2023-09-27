#include <bits/stdc++.h>
#include <chrono>
 #include <thread>
#include <fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
#define cls system("cls");
#define pause system("pause");
template<class T>
  void displayfile(const T& filename);
class student
{
protected:
    vector<string> name;
    vector<string> college;
    vector<vector<string>> course_name;
    vector<int> paid_money;
    vector<string> payment_id;
    int student_no = 0;

public:
    void goclass();
    void enrollCourse();
   
 virtual void yourlevel()=0;
};

class Show_Coaching_name
{
    string s;
public:
Show_Coaching_name(){}
Show_Coaching_name(string str){
    s=str;
       cout<<"///////////////////////////" <<char(3)<<s<< char (3)<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    cout<<" ************************************************************************************* "<<endl;
      cout<<"      **************************************************************************** "<<endl;
            cout<<"           ************************************************************* "<<endl;
                cout<<"                    *************************************************"<<endl;


};

};
class authority : public student
{

public:
   
    void showEnrolledCourses();
    void yourlevel(){
        cout<<"You are now acting as a Authority"<<endl;
    }
    
    
};
class owner : public authority
{
    string owner_name, pass;
    int s_no;

public:
    
    void owner_identity();
     void totalincome();
         void totalspending();
         int operator+(const owner& other_owner);
         void yourlevel(){
        cout<<"You are now acting as a Owner"<<endl;
    }
};
  void owner::owner_identity(){
    cout<<"Slect Option:"<<endl;
    cout<<"1.show Total income"<<endl;
     cout<<"2.show Total expenditure"<<endl;
    int opt;
    cin>>opt;
   if(opt==1)
    void totalincome();
    else
    void totalspending();
    }
void owner::totalincome(){
 
  int t_income = *this+*this;
    cout<<"Total enrolled student:"<<student_no<<endl;
    cout<<"Total income:  "<<t_income<<endl;
    

}


int owner::operator+(const owner& other_owner)  {
    int total_income = 0;

    for (int i = 0; i < student_no; i++) {
        total_income += paid_money[i];
    }

    return total_income;
}
void owner::totalspending(){
    cout<<"For student spend: "<<student_no*100<<" Tk"<<endl;
    cout<<"For course Teacher:30000 Tk"<<endl;
     cout<<" For Stuff:  10000 Tk"<<endl;
     cout<<"Total spend:  "<<student_no*100+30000+10000<<"TK"<<endl;

}

void authority::showEnrolledCourses() {
   level5:  cout << "Select one option:" << endl;
        cout << "1. Show total enrolled students with details" << endl;
        cout << "2. Show course teacher with details" << endl;
        int input;
        cin >> input;
 if (input == 1){
    if (student_no==0) {
        cout << "No students have enrolled in any courses yet." << endl;
        return;
    }
   displayfile<string>( "Student Data.txt");
}

         else if (input == 2) {

             cout<<"physics teacher:   "<<endl<<endl<<"1.Md.Masum Molla(KUET-CSE)"<<endl<<"email:molla21040@stud.kuet.ac.bd"<<endl<<"mobile no:01518403124"<<endl<<"salary:10000"<<endl;
            cout<<"2.Dipra(KUET-CSE)"<<endl<<"email:dipra2107070@stud.kuet.ac.bd"<<endl<<"mobile no:01518403125"<<endl<<"salary:10000"<<endl;
            cout<<"Math teacher"<<endl;
            cout<<"1.Md.Himel(KUET-CSE)"<<endl<<"email:himel21032@stud.kuet.ac.bd"<<endl<<"mobile no:01518403126"<<endl<<"salary:10000"<<endl;
            cout<<"Biology teacher"<<endl<<endl;
            cout<<"1.siyam khan(KUET-CSE)"<<endl<<"email:siyam210120@stud.kuet.ac.bd"<<endl<<"mobile no:01518403126"<<endl<<"salary:5000"<<endl;
         cout<<"chemistry teacher:"<<endl<<endl;
           
            cout<<"1.jahid hasan (KUET-CSE)"<<endl<<"email:jahid210120@stud.kuet.ac.bd"<<endl<<"mobile no:01518403127"<<endl<<"salary:5000"<<endl;
         }
         else {
            cout << "Invalid option. Please try again." << endl;
            goto level5;
        }
    }
    
  template<class T>
  void displayfile(const T& filename)
    {

    
     ifstream file(filename);
     if (!file.is_open()) {
        cout << "Unable to open file: " <<filename << endl;
        return;
    }
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
  
    }


void student::goclass()
{
level1:
    cout << "Select one option:" << endl;
    cout << "1.Enroll Course" << endl;
    cout << "2.Description" << endl;
    cout << "3.Our Address" << endl;
    cout << "4.Go back" << endl;

    int a;
    cin >> a;
cls
    if (a == 1)
    {
        enrollCourse();
    }
    else if (a == 2)
    {
        cout << "Our coaching center plays a vital role in the educational landscape by providing supplementary education and exam preparation to students. It serves as a valuable resource for those seeking to strengthen their knowledge, skills, and confidence, ultimately helping them achieve academic success and reach their career aspirations." << endl;
    }
    else if (a == 3)
    {
        cout << "Khanabari, KUET Road, Fulbarigate, Khulna" << endl;
        cout << "See on Google Map" << endl;
    }
    else if (a == 4)
    {
        goto level1;
    }
    else
    {
        cout << "Invalid option. Please try again." << endl;
    }
}

void student::enrollCourse()
{
    cout << "Are you in science group?" << endl;
    cout << "yes or no" << endl;

    string group;
    cin >> group;
cls
    if (group == "yes")
    {
        cout << "Select your level:" << endl;
        cout << "1.SSC" << endl;
        cout << "2.HSC" << endl;

        int level;
        cin >> level;

        if (level == 1)
        {
            int numCourses;
        level2:
            cout << "Available course for you" << endl;
            cout << "1.General math" << endl;
            cout << "2.Higher math" << endl;
            cout << "3.Physics" << endl;
            cout << "4.Chemistry" << endl;
            cout << endl
                 << endl;
            cout << "NB:Per courses Enroll fee 500" << endl;
            pause
                    cout
                << "number of courses you want to enroll:" << endl;
            cin >> numCourses;
            if (numCourses > 4)
            {
                cout << "invalid choice ! Please try again !" << endl;
                goto level2;
            }

            cout << "Select your " << numCourses << " courses:" << endl;

            vector<string> courses;
            int total_fee = 0;

            for (int i = 0; i < numCourses; i++)
            {
                int choice;
                cin >> choice;

                if (choice == 1)
                {
                    courses.push_back("General math");
                    total_fee += 500;
                }
                else if (choice == 2)
                {
                    courses.push_back("Higher math");
                    total_fee += 500;
                }
                else if (choice == 3)
                {
                    courses.push_back("Physics");
                    total_fee += 500;
                }
                else if (choice == 4)
                {
                    courses.push_back("Chemistry");
                    total_fee += 500;
                }
                else
                {
                    cout << "Invalid choice. Please try again." << endl;
                    return;
                }
            }

            cout << "Total course enrolled fee: " << total_fee << " Tk Only" << endl;

            cout << "Press 1 for payment, otherwise 0: ";
            int payment;
            cin >> payment;

            if (payment == 1)
            {
                student_no++;
                cout << "Write your name: ";
                string studentName;
                cin.ignore();
                ofstream stu;
                stu.open("Student Data.txt");
                getline(cin, studentName);
                name.push_back(studentName);
                stu << "Student Level: SSC" << endl;

                stu << "Student No. " << student_no << endl;
                stu << "Name: " << studentName << endl;

                cout << "Write your college: ";
                string studentCollege;
                getline(cin, studentCollege);
                stu << "College: " << studentCollege << endl;
                cout << "please pay Tk " << total_fee << " in Bkash No. 01518403124" << endl;
                cout << "Put your Transtion id of payment" << endl;
                string pay_id;
                getline(cin, pay_id);
                payment_id.push_back(pay_id);
                stu << "Transaction id:" << pay_id << endl;
                college.push_back(studentCollege);

                course_name.push_back(courses);
                paid_money.push_back(total_fee);
                for (int i = 0; i < numCourses; i++)
                {
                    stu << i + 1 << "." << courses[i] << endl;
                }
                stu << "Paid money:" << total_fee << endl;
                cout << "Selected course enrolled successfully." << endl
                     << "Thank you ~! stay with us" << endl;
            }
            else
            {
                cout << "Enrollment canceled." << endl;
            }
        }
        else if (level == 2)
        {

            {
                int numCourses;
            level3:
                cout << "Available course for you" << endl;
                cout << "1.Biology" << endl;
                cout << "2.Higher math" << endl;
                cout << "3.Physics" << endl;
                cout << "4.Chemistry" << endl;
                cout<<endl<<endl;
 cout<<"NB:Per courses Enrolled fee 800 Tk only"<<endl;
            pause
                cout << "number of courses you want to enroll:" << endl;
                cin >> numCourses;
                if (numCourses > 4)
                {
                    cout << "invalid choice ! Please try again !" << endl;
                    goto level3;
                }
                cout << "Select your " << numCourses << " courses:" << endl;

                vector<string> courses;
                int total_fee = 0;

                for (int i = 0; i < numCourses; i++)
                {
                    int choice;
                    cin >> choice;

                    if (choice == 1)
                    {
                        courses.push_back("Biology");
                        total_fee += 800;
                    }
                    else if (choice == 2)
                    {
                        courses.push_back("Higher math");
                        total_fee += 800;
                    }
                    else if (choice == 3)
                    {
                        courses.push_back("Physics");
                        total_fee += 800;
                    }
                    else if (choice == 4)
                    {
                        courses.push_back("Chemistry");
                        total_fee += 800;
                    }
                    else
                    {
                        cout << "Invalid choice. Please try again." << endl;
                        return;
                    }
                }

                cout << "Total course enrolled fee: " << total_fee << " Tk" << endl;

                cout << "Press 1 for payment, otherwise 0: ";
                int payment;
                cin >> payment;

                if (payment == 1)
                {
                    student_no++;
                    ofstream stu;
                    stu.open("Student Data.txt");
                    cout << "Write your name: ";
                    string studentName;
                    cin.ignore();
                    getline(cin, studentName);
                    name.push_back(studentName);
                    stu << "Student Level: HSC" << endl;

                    stu << "Student No. " << student_no << endl;
                    stu << "Name: " << studentName << endl;

                    cout << "Write your college: ";
                    string studentCollege;
                    getline(cin, studentCollege);
                    college.push_back(studentCollege);

                    stu << "College: " << studentCollege << endl;
                    cout << "please pay Tk " << total_fee << " in Bkash No. 01518403124" << endl;
                    cout << "Put your Transtion id of payment" << endl;
                    string pay_id;
                    getline(cin, pay_id);
                    payment_id.push_back(pay_id);
                    stu << "Transaction id:" << pay_id << endl;

                    course_name.push_back(courses);
                    paid_money.push_back(total_fee);
                    stu << "Enrolled Courses:" << endl;
                    for (int i = 0; i < numCourses; i++)
                    {
                        stu << i + 1 << "." << courses[i] << endl;
                    }
                    stu << "Paid money:" << total_fee << endl;

                    cout << "Selected course enrolled successfully." << endl
                         << "Thank you ~! stay with us" << endl;
                }
                else
                {
                    cout << "Enrollment canceled." << endl;
                }
            }
        }
        else
        {
            cout << "Invalid level. Please try again." << endl;
        }
    }
    else
        cout << "sorry ! This is only Science coaching center" << endl;
}




int main()
{
     //cout<<"\033[44m";
         HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     //SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

     SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);



    Show_Coaching_name cm("WELCOME TO SCIENCE COACHING CENTER");
  
    owner own;
     authority autho;
     owner ow;
student *b1=&autho;
student *b2=&ow;


  level8:  cout<<"Select One option"<<endl;
  lebel:  cout << "1. Student" << endl << "2. Authority" <<endl<<"3.owner of coaching"<<endl<<"4.For exit"<< endl;
    int choice;
    cin >> choice;
cls
    if (choice == 1) {
        own.goclass();
    } else if (choice == 2) {
        string myname="Masum";
        string mypass="masum123";
        string name;
        int c=0;
        vector<char>pass;
        
        cout<<"Sign in"<<endl;
        pause

        cout<<"First give your identity:"<<endl;
      level4:  cout << " Write Your  short name: ";
        cin>>name;
        cout << " Write Your 8 digit password: ";
        for(int i=0;i<8;i++){
            char p;
             p=_getch();
             if(p!='\b'){
             
            cout<<"*";    
       pass.push_back(p);
             }
        }
        cout<<endl;
        if(name==myname){
            for(int i=0;i<pass.size();i++){
                if(pass[i]==mypass[i])
                c++;

            }
            if(c==8){
                cout<<"You Are verified!"<<endl;
                b1->yourlevel();
                own.showEnrolledCourses();
            }
            else{
                cout<<"Please Try Again"<<endl;
                goto level4;
            
            }


        }
        else{
            cout<<"wrong user name or password"<<endl;
            cout<<"Try Again"<<endl; 
            goto level4;
        }
     
    } 
    if(choice==3){
        cout<<"vefiry that you are owner of coaching"<<endl;
 string myname="Masum";
        string mypass="masum123";
        string name;
        int c=0;
        vector<char>pass;
      
        cout<<"Sign in"<<endl;
        pause
        cout<<"First give your identity:"<<endl;
      level6:  cout << " Write Your  short name: ";
        cin>>name;
    
        if(name==myname){

    cout << " Write Your 8 digit password: ";
        for(int i=0;i<8;i++){
            char p;
             p=_getch();
            cout<<"*";  
            
            
            
       pass.push_back(p);
        }
        cout<<endl;


            for(int i=0;i<pass.size();i++){
                if(pass[i]==mypass[i])
                c++;

            }
            if(c==8){
                cout<<"You Are verified!"<<endl;
                b2->yourlevel();
                own.owner_identity();
            }
            else{
                cout<<" Wrong Password !Please Try Again"<<endl;
                goto level6;
            
            }

        }
        else{
        cout<<"Wrong username ! . Please Try again"<<endl;
        goto level6;
        }
    }
    else if (choice==4){
        cout << "Rest in peace" << endl;
        exit(0);
       
    }
     goto level8;

    return 0;
    }

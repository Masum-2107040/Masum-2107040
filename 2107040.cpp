#include<bits/stdc++.h>
using namespace std;
#define cls system("cls");  
#define pause system("pause");  
class student;

class authority {

    string s1 = "masum";
    string p1 = "2107040";
    string s2 = "rafi";
    string p2 = "2107046";
    string s3 = "shisir";
    string p3 = "2107027";
public:
    void identity(string your_name, string password, student &s);
    void showEnrolledCourses(student &s);
};

class student {
private:
    vector<string> name;
    vector<string> college;
    vector<vector<string>> course_name;
    vector<int> paid_money;
     vector<string>payment_id;
    int student_no=0;

public:
    void goclass();
    void enrollCourse();
    //void showEnrolledCourses() const;
    friend class authority;
    friend class owner;
   
};
class owner{
    string owner_name,pass;
    int s_no;
    public:
    string own="masum";
    string p2="masum12345";
    void owner_identity(string owner_name,string pass,student &s);
    void totalincome(student &s);
    void totalspending(student &s);
};
class Registration{
    private:
    
   string reg_name;
   string email;
    public:
    void registe(string reg_name,string email){
this->reg_name=reg_name;
this->email=email;

    }

};
void owner::owner_identity(string owner_name,string pass,student &s){
    this->owner_name=owner_name;
    this->pass=pass;
    if(  this->owner_name==own && this->pass==p2){
        cout<<"Congratulation !"<<endl<<"How can i help you?"<<endl;
      level1: cout<<"1.show Total income"<<endl;
        cout<<"2.show Total spending"<<endl;
        int your_choice;
        cin>>your_choice;
        if(your_choice==1){
            totalincome(s);

        }
          else if(your_choice==2){
            totalspending(s);

        }
        else{
        cout<<" Invalid option! "<<endl<<"1.Try again"<<endl<<"2. Exit"<<endl;
        int opt;
        cin>>opt;
        if(opt==1)
        goto level1;
        else
        exit(0);

        }

    }
    else
    {
        cout<<"Aunthentication failed!"<<endl;
    }

}
void owner::totalincome(student &s){
    int t_income=0;
    for(int i=0;i<s.student_no;i++){
        t_income+= s.paid_money[i];
        s_no=i;
    }
    cout<<"Total enrolled student:"<<s.student_no<<endl;
    cout<<"Total income:  "<<t_income<<endl;

}
void owner::totalspending(student &s){
    cout<<"For student spend: "<<s.student_no*100<<" Tk"<<endl;
    cout<<"For course Teacher:30000 Tk"<<endl;
     cout<<" For Stuff:  10000 Tk"<<endl;
     cout<<"Total spend:  "<<s.student_no*100+30000+10000<<"TK"<<endl;

}

void student::goclass() {
    cout << "Select one option:" << endl;
   level3: cout << "1.Enroll Course" << endl;
    cout << "2.Description" << endl;
    cout << "3.Our Address" << endl;
    cout << "4.Go back" << endl;

    int a;
    cin >> a;

    if (a == 1) {
        enrollCourse();
    } else if (a == 2) {
        cout << "Our coaching center plays a vital role in the educational landscape by providing supplementary education and exam preparation to students. It serves as a valuable resource for those seeking to strengthen their knowledge, skills, and confidence, ultimately helping them achieve academic success and reach their career aspirations." << endl;
    } else if (a == 3) {
        cout << "Khanabari, KUET Road, Fulbarigate, Khulna" << endl;
        cout << "See on Google Map" << endl;
    } else if (a == 4) {
       goto level3;
    } else {
        cout << "Invalid option. Please try again." << endl;
    }
}

void student::enrollCourse() {
    cout << "Are you in science group?" << endl;
    cout << "yes or no" << endl;
    

    string group;
    cin >> group;

    if (group == "yes" ) {
        cout << "Select level:" << endl;
        cout << "1.SSC" << endl;
        cout << "2.HSC" << endl;

        int level;
        cin >> level;

        if (level == 1) {
              int numCourses;
              cout<<"Available course for you"<<endl;
             cout << "1.General math" << endl;
            cout << "2.Higher math" << endl;
            cout << "3.Physics" << endl;
            cout << "4.Chemistry" << endl;

            cout << "number of courses you want to enroll:" << endl;
             cin >> numCourses;
             cout << "Select your "<<numCourses<<" courses:" << endl;
          
          
     
            vector<string> courses;
            int total_fee = 0;

            for (int i = 0; i < numCourses; i++) {
                int choice;
                cin >> choice;

                if (choice == 1) {
                    courses.push_back("General math");
                    total_fee += 500;
                } else if (choice == 2) {
                    courses.push_back("Higher math");
                    total_fee += 500;
                } else if (choice == 3) {
                    courses.push_back("Physics");
                    total_fee += 500;
                } else if (choice == 4) {
                    courses.push_back("Chemistry");
                    total_fee += 500;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                    return;
                }
            }

            cout << "Total course enrolled fee: " << total_fee << " Tk" << endl;

            cout << "Press 1 for payment, otherwise 0: ";
            int payment;
            cin >> payment;

            if (payment == 1) {
                cout << "Write your name: ";
                string studentName;
                cin.ignore();
                getline(cin, studentName);
                name.push_back(studentName);

                cout << "Write your college: ";
                string studentCollege;
                getline(cin, studentCollege);
                cout<<"please pay Tk "<<total_fee<<" in Bkash No. 01518403124"<<endl;
                cout<<"Put your Transtion id of payment"<<endl;
                string pay_id;
               getline(cin,pay_id);
               payment_id.push_back(pay_id);
                college.push_back(studentCollege);

                course_name.push_back(courses);
                paid_money.push_back(total_fee);

                cout << "Selected course enrolled successfully." <<endl<<"Thank you ~! stay with us"<< endl;
                student_no++;
            } else {
                cout << "Enrollment canceled." << endl;
            }
        } 
        else if (level == 2) {
            
            
            {
              int numCourses;
              cout<<"Available course for you"<<endl;
             cout << "1.Biology" << endl;
            cout << "2.Higher math" << endl;
            cout << "3.Physics" << endl;
            cout << "4.Chemistry" << endl;

            cout << "number of courses you want to enroll:" << endl;
             cin >> numCourses;
             cout << "Select your "<<numCourses<<" courses:" << endl;
          
          
     
            vector<string> courses;
            int total_fee = 0;

            for (int i = 0; i < numCourses; i++) {
                int choice;
                cin >> choice;

                if (choice == 1) {
                    courses.push_back("Biology");
                    total_fee += 800;
                } else if (choice == 2) {
                    courses.push_back("Higher math");
                    total_fee += 800;
                } else if (choice == 3) {
                    courses.push_back("Physics");
                    total_fee += 800;
                } else if (choice == 4) {
                    courses.push_back("Chemistry");
                    total_fee += 800;
                } else {
                    cout << "Invalid choice. Please try again." << endl;
                    return;
                }
            }

            cout << "Total course enrolled fee: " << total_fee << " Tk" << endl;

            cout << "Press 1 for payment, otherwise 0: ";
            int payment;
            cin >> payment;

            if (payment == 1) {
                cout << "Write your name: ";
                string studentName;
                cin.ignore();
                getline(cin, studentName);
                name.push_back(studentName);

                cout << "Write your college: ";
                string studentCollege;
                getline(cin, studentCollege);
                cout<<"please pay Tk "<<total_fee<<" in Bkash No. 01518403124"<<endl;
                cout<<"Put your Transtion id of payment"<<endl;
                string pay_id;
               getline(cin,pay_id);
               payment_id.push_back(pay_id);
                college.push_back(studentCollege);

                course_name.push_back(courses);
                paid_money.push_back(total_fee);

                cout << "Selected course enrolled successfully." <<endl<<"Thank you ~! stay with us"<< endl;
                student_no++;
            } else {
                cout << "Enrollment canceled." << endl;
            }
        } 
            
            
            
            

        } else {
            cout << "Invalid level. Please try again." << endl;
        }
    }
    else
cout<<"sorry ! This is only Science coaching center"<<endl;
}

void authority::showEnrolledCourses(student &s) {
    if (s.name.empty()) {
        cout << "No students have enrolled in any courses yet." << endl;
        return;
    }

    for (int i = 0; i <s.student_no; i++) {
        cout << "Student name: " << s.name[i] << endl;
        cout << "College: " << s.college[i] << endl;
        cout << "Enrolled courses: ";
        for (const string& course : s.course_name[i]) {
            cout << course << " ";
        }
        cout << endl;
        cout << "Paid money: " << s.paid_money[i] << " Tk" << endl;
        cout<<"Tranjaction Id:"<<s.payment_id[i]<<endl;
    }
}

void authority::identity(string your_name, string password, student &s) {
    if ((your_name == s1 && password == p1) ||
        (your_name == s2 && password == p2) ||
        (your_name == s3 && password == p3)) {
        cout << "Welcome!" << endl;
        cout << "You are verified." << endl;
        cout << "Select one option:" << endl;
        cout << "1. Show total enrolled students with details" << endl;
        cout << "2. Show course teacher with details" << endl;
        int input;
        cin >> input;
        if (input == 1) {
            
        showEnrolledCourses(s);
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
        }
    } else {
        cout << "Authentication failed. Please try again." << endl;
    }
}

int main() {
    cout<<"\033[44m";
    cout<<"///////////////////////////" <<char(3)<<" Welcome to Science Coaching Center "<< char (3)<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    cout<<" ************************************************************************************* "<<endl;
      cout<<"      **************************************************************************** "<<endl;
            cout<<"           ************************************************************* "<<endl;
                cout<<"                    *************************************************"<<endl;
    student s;
    authority oth;
    owner own;
    Registration reg;
    cout<<"Please Registration First:"<<endl;
    string names,email1;
    cout<<"Give your name:";
    cin>>names;
    cout<<endl;
    cout<<"Give your email:";
    cin>>email1;
    cout<<endl;
    reg.registe(names,email1);
     

   
  cout<<"Select One option"<<endl;
  lebel:  cout << "1. Student" << endl << "2. Authority" <<endl<<"3.owner of coaching"<<endl<<"4.For exit"<< endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        s.goclass();
    } else if (choice == 2) {
        string name, password;
        cout<<"first give your identity:"<<endl;
        cout << "Your name: ";
        cin >> name;
        cout << "Your password: ";
        cin >> password;

        oth.identity(name, password,s);
    } 
    if(choice==3){
        cout<<"vefiry that you are owner of coaching"<<endl;
        string ownername,pass;
        cout<<"Write your short name:"<<endl;
        //getline(cin,ownername);
        //cin.ignore();
        cin>>ownername;
        cout<<"write your password:"<<endl;
       //getline(cin,pass);
       //1cin.ignore();
       cin>>pass;
        own.owner_identity(ownername,pass,s);
    }
    else if (choice==4){
        cout << "Rest in peace" << endl;
        exit(0);
       
    }
     goto lebel;

    return 0;
}


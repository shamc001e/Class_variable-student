#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int f(int grade){
    int fee;
    if(grade >= 1 && grade <= 5){
        fee = 305;
    } else if(grade >= 6 && grade <= 10){
        fee = 330;
    } else if(grade >= 11){
        fee = 380;
    }
    return fee;
}

string hsw(int r_no){
    string f_h;
    if(r_no >= 1 && r_no <=10){
        f_h = "green";
    }
    else if(r_no >= 11 && r_no <= 20){
        f_h = "red";
    }
    else if(r_no >= 21 && r_no <= 30){
        f_h = "blue";
    }
    else if(r_no >= 31){
        f_h = "yellow";
    }

    return f_h;
}

int sw(int age){
    int grade;

    switch(age){
            case 6:
                grade = 1;
                break;
            case 7:
                grade = 2;
                break;
            case 8:
                grade = 3;
                break;
            case 9:
                grade = 4;
                break;
            case 10:
                grade = 5;
                break;
            case 11:
                grade = 6;
                break;
            case 12:
                grade = 7;
                break;
            case 13:
                grade = 8;
                break;
            case 14:
                grade = 9;
                break;
            case 15:
                grade = 10;
                break;
            case 16:
                grade = 11;
                break;
            case 17:
                grade = 12;
                break;
            case 0:
                grade = 0;
            }

    return grade;
}


class Student{
    private:
        int grade;
        string e_mail;
        int div_ = rand();
        int division;
        vector<int> north{1,2,6,7,8,9,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
        vector<int> south{51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
        vector<int> east{101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150};
        vector<int> west{151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200};
        vector<string> small{"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        vector<string> big{"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        vector<string> sym{as}
        int fee;
        int pass = rand();
        int p_word = pass % 1000000;
    public:
        string name_1;
        string name_2;
        int age;
        int serial_number;
        string gender;
        string city;
        string region;

        Student(string aName_1,string aName_2, int aAge, int Asr, string aGender,string aCity, string aRegion){
            name_1 = aName_1;
            name_2 = aName_2;
            age = aAge;
            serial_number = Asr;
            gender = aGender;
            city = aCity;
            region = aRegion;
        }
        Student(){
            name_1 = "not defined";
            name_2 = "not defined";
            age = 0;
            serial_number = 0;
            gender = "not defined";
            city = "not entered";
            region = "--";
        }

        void Grade(){
            grade =sw(age);
            cout << grade;
        }
        void Email(){
            string s_Na = std::to_string(serial_number);
            e_mail = name_1 + s_Na + "@gmail.com";
            cout << e_mail;
        }
        void Section(){
            grade =sw(age);

            if(grade <=5){
                division = div_ %12 + 1;
            } else if(grade <= 8){
                division = div_ %10 + 1;
            } else if(grade <= 10){
                division = div_ %8 + 1;
            } else if(grade <= 12){
                division = div_ %6 + 1;
            }

            string div_to = std::to_string(division);
            string grade_div = std::to_string(grade);
            string x;
            if(gender == "male" || gender == "boy"){
                x = "B";
            } else if(gender == "female" || gender == "girl"){
                x = "A";
            }
            cout << grade_div + x + div_to;
        }
        void Bus_num(){
            int b_num;
            if(city == "makkah"){
                if(region == "north"){
                    b_num = 3;
                } else if(region == "south"){
                    b_num = 5;
                } else if(region == "east"){
                    b_num = 10;
                } else if(region == "west"){
                    b_num = 4;
                }
            }
            else{
                int b_n = rand()%50 + 1;
                if(region == "north"){
                    b_num = north[b_n];
                } else if(region == "south"){
                    b_num = south[b_n];
                } else if(region == "east"){
                    b_num = east[b_n];
                } else if(region == "west"){
                    b_num = west[b_n];
                }
            }

            cout << b_num;
        }
        void admission_num(){
            int x = rand() % 18000 + 1;
            cout << x;
        }
        void Fee_total(int months){
            grade = sw(age);
            int fee = f(grade);
            int t_f = fee * months;
            int f_tf;
            int _final;
            if(months == 6){
                f_tf = t_f - (t_f * 0.05);
            } else if(months == 12){
                f_tf = t_f - (t_f * 0.1);
            } else{
                f_tf = t_f;
            }
            _final = f_tf + (f_tf* 0.15);
            cout <<"SAR " << _final << endl;

        }
        void House(){
            string house_f = hsw(serial_number);
            cout << house_f << endl;
        }
        void Username(){
            grade = sw(age);
            string gdr = std::to_string(grade);
            string srno = std::to_string(serial_number);
            string usr = gdr + name_1 + srno;
            cout << usr;
        }
        void Password(){
            int alph1 = rand() % 26;
            int alph2 = rand() % 25;
            string a1 = small[alph1];
            string a2 = big[alph2];
            cout << p_word << a1 << a2;
        }



};

int main()
{
    srand(time(0));
    Student student1("James", "Bond", 17, 15, "male", "jeddah", "east");

    student1.Password();
    return 0;
}

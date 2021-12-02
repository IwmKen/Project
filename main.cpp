#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
class LoginManager {
    public :
        string NewuserName;
        string a;
        LoginManager () {

        }
        void Submit ( string a ) {
            cout << "sina" << endl;
           // ofstream F1("Submit.dat",ios::app);


            ofstream file1( "Submit.dat" );
            //By using the variable of ofstream data type, writing the contents into the file
            ifstream file2( "Submit.dat" );
            if ( !file2 ) {
                cout << "UserName Alreay Taken" ;
                exit (0);
            }
            file1 << a<< endl;
            }
            void Login ( string a ) {
            ofstream file1 ( "Login.dat" );
            ifstream file2 ( "Login.dat" );
            if ( !file2 ) {
                cout << "Wrong UserName" ;
                exit ( 0 ) ;
            }
            file1 << a << endl;
            }

};
int main()
{
cout << "Enter Your UserName\nUserName :" ;
LoginManager Mmd;
string a;
cin >> a;

if ( a=="test" ) {
    cout << a ;
    Mmd.Submit ( a ) ;
    cout << "Welcome" ;
}
else if ( a=="test" ) {
    cout << a ;
    Mmd.Login ( a ) ;
    cout << "Welcome" ;
}
else {
    cout <<"Wrong UserName" ;
}


    return 0;
}
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
//////////JIMIZ//////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////
/////////////////////////////

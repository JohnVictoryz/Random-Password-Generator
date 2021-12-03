#include <iostream>

int main(){
    using namespace std;
   
    int cpass,newpass,userinputedpass;
    cpass = 1234;
    newpass = rand() %25 +1563482365830984390;
    cout << "Type your current password:";
    cin >> userinputedpass;
    if (cpass == userinputedpass)  {
         cout << "your new password is:";
         cout << newpass;
         cout << " \n";
    }    else {
        cout << "Incorrect password Try Again :(";
    } 

    
    system("pause");
    return 0;
}
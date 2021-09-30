#include <iostream>
#include <string>

using namespace std;

class Check {
private:
    int num, amount;
    string memo;
    static int number;
public:
    void CheckNum();
    void CheckMemo();
    void CheckAmount();

    int getNum();
    void setNum(int n);

    string getMemo();
    void setMemo(string m);

    int getAmount();
    void setAmount(int a);

    Check()
    {
        num = 0;
        memo = "";
        amount = 0;
        number++;
    }

};
int Check::number = 0;

void Check::CheckNum() {
    cout << "Hello World!";
}

void Check::CheckMemo() {
    cout << "Hello World!";
}

void Check::CheckAmount() {
    cout << "Hello World!";
}

int Check::getNum() {
    return num;
}

void Check::setNum(int n) {
    num = n;
}

string Check::getMemo() {
    return memo;
}

void Check::setMemo(string m) {
    memo = m;
}

int Check::getAmount() {
    return amount;
}

void Check::setAmount(int a) {
    amount = a;
}

class CheckBook {
public:
    static int allChecks;
    void getAllChecks();
    bool writeCheck(float amount);
    void displayChecks();

    CheckBook()
    {
        allChecks++;
    }
};
int CheckBook::allChecks = 0;

void CheckBook::getAllChecks() {
    cout << allChecks;
}

bool writeCheck(float amount) {
    Check myObj;
    int num = myObj.getNum();
    if( num < 100 and CheckBook::allChecks<10 and amount>0 )//value of N not defined in question
    {
        myObj.getNum++;
        CheckBook::allChecks++;
        return true;
    }
    else
    {
        return false;
    }
}

void displayChecks(){
    cout << "Check Number\t Check Memo\t Check Amount" <<endl;
    for(int i = myObj.getcheckNum - 1; i >= 0; i--){
        cout << arr[i].CheckNum << "\t\t" << arr[i].CheckMemo << "\t\t" << arr[i].CheckAmount<<endl;
    }
}

int main()
{
    CheckBook cb1(1000), cb2(500);
    for(int i=0; i<10;i++)
    {
        cb1.writeCheck(150);
        cb2.writeCheck(130);
    }

    cout<<"cb1 check details"<<endl;
    cb1.displayChecks();
    cout<<"cb2 check details"<<endl;
    cb2.displayChecks();

    cout<<cb1.getAllChecks()<<endl;
    cout<<cb2.getAllChecks()<<endl;
}
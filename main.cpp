#include <iostream>
#include<string>
using namespace std;
class uEmployeeClassTwo{
public:
    uEmployeeClassTwo(string name,string lastname,int monthly);
    void setEmplolyeeName(string name);
    string getEmployeeName();

    void setEmployeeLastName(string lastname);
    string getEmployeeLastName();

    void setEmployeeMonthly(int monthly);
    int getEmployeeMonthly();
private:
    string employeeName;
    string employeelastName;
    int employeemonthly;

};
uEmployeeClassTwo::uEmployeeClassTwo(string name, string lastname, int monthly) {
    setEmplolyeeName(name);
    setEmployeeLastName(lastname);
    setEmployeeMonthly(monthly);
}
void uEmployeeClassTwo::setEmplolyeeName(string name) {
    employeeName=name;
}
string uEmployeeClassTwo::getEmployeeName() {
    return employeeName;
}
void uEmployeeClassTwo::setEmployeeLastName(string lastname) {
    employeelastName=lastname;
}
string uEmployeeClassTwo::getEmployeeLastName() {
    return employeelastName;
}
void  uEmployeeClassTwo::setEmployeeMonthly(int monthly) {
    employeemonthly=monthly;
}
int uEmployeeClassTwo::getEmployeeMonthly(){
    return employeemonthly;
}
int main() {
    uEmployeeClassTwo employe1("Mariana","Avila",100);
    cout<<employe1.getEmployeeName()<<","<<employe1.getEmployeeLastName()<<","<<employe1.getEmployeeMonthly();
    cout<<endl;

    employe1.setEmployeeMonthly(employe1.getEmployeeMonthly()+employe1.getEmployeeMonthly()*10/100);
    cout<<employe1.getEmployeeMonthly();
    return 0;
}

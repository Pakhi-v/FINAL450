#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<num<<endl;

    //address of operator(&)
    cout<<"Address of num is:"<<&num<<endl;

    int *ptr = &num;
    cout<<"Address:"<<*ptr<<endl; //(*) printing value
    cout<<"value:"<<ptr<<endl; //(ptr)printing address

    cout<<"size of integer is"<<sizeof(num) << endl;
    cout<<"size of pointer is"<<sizeof(ptr) << endl;


}
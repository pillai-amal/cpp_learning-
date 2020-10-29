#include<iostream>
#include<functional>
using namespace std;

int main()
{
    [out = ref(cout<<"Hello ")](){out.get() <<"All ";}();
    return 0;
}
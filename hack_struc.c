#include<iostream>
using namespace std;
typedef struct student
{
    int age;
    char first_name;
    char last_name;
    char standard;
}st;
int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
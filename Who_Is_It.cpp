#include<bits/stdc++.h>
using namespace std;

class student {
public:
    int id;
    string name;
    char grade;
    int marks;
};

bool cmp(student a, student b){
    if(a.marks > b.marks) return true;
    if(a.marks < b.marks) return false;
    return a.id < b.id;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        student a[3];
        for(int i=0;i<3;i++){
            cin >> a[i].id >> a[i].name >> a[i].grade >> a[i].marks;
        }

        sort(a, a+3, cmp);
        cout << a[0].id << " " << a[0].name << " " << a[0].grade << " " << a[0].marks << endl;
    }
}
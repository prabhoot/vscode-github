#include <iostream>
#include <vector>
using namespace std;
vector<int> gradingStudents(vector<int> grades) {
    int n=grades.size();
    for(int i=0;i<n;i++){
        if(grades[i]>37){
            int temp=grades[i]%5;
            if(temp>2){
                grades[i]+=(5-temp);
            }
        }
        grades[i]+=grades[i]%100;
    }
    return grades;
}
int countingValleys(int steps, string str) {
    while (str[])
}

int main(){

    return 0;
}
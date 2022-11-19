#include<iostream>
using namespace std;
int main() {
string nameStu[5];
int nameStuG[5], gradeEnter[7], nameStuL = 7;
int total1, total2, total3, total4, total5;
int average1, average2, average3, average4, average5;
//1st Student.
cout<<"Name of 1st Student: "; cin>>nameStu[0];
    for(int x = 0; x <= nameStuL; x++) {
        string grades;
        cout<<"Enter the grades of the student:"; cin>>gradeEnter[7];
        total1 = total1 + gradeEnter[7];
        }
average1 = total1 / 8;
cout<<"The average grade of Mr/Ms."<<nameStu[0]<<" is "<<average1<<endl;
//2nd Student
cout<<"Name of 2nd Student: "; cin>>nameStu[1];
    for(int x = 0; x <= nameStuL; x++) {
        string grades;
        cout<<"Enter the grades of the student:"; cin>>gradeEnter[7];
        total2 = total2 + gradeEnter[7];
        }
average2 = total2 / 8;
cout<<"The average grade of Mr/Ms."<<nameStu[1]<<" is "<<average2<<endl;
//3rd Student.
cout<<"Name of 3rd Student: "; cin>>nameStu[2];
    for(int x = 0; x <= nameStuL; x++) {
        string grades;
        cout<<"Enter the grades of the student:"; cin>>gradeEnter[7];
        total3 = total3 + gradeEnter[7];
        }
average3 = total3 / 8;
cout<<"The average grade of Mr/Ms."<<nameStu[2]<<" is "<<average3<<endl;
//4th Student.
cout<<"Name of 4th Student: "; cin>>nameStu[3];
    for(int x = 0; x <= nameStuL; x++) {
        string grades;
        cout<<"Enter the grades of the student:"; cin>>gradeEnter[7];
        total4 = total4 + gradeEnter[7];
        }
average4 = total4 / 8;
cout<<"The average grade of Mr/Ms."<<nameStu[3]<<" is "<<average4<<endl;
//5th Student.
cout<<"Name of 5th Student: "; cin>>nameStu[4];
    for(int x = 0; x <= nameStuL; x++) {
        string grades;
        cout<<"Enter the grades of the student:"; cin>>gradeEnter[7];
        total5 = total5 + gradeEnter[7];
        }
average5 = total5 / 8;
cout<<"The average grade of Mr/Ms."<<nameStu[4]<<" is "<<average5<<endl;
int sortAve[5] = {average1, average2, average3, average4, average5}, store;
for(int x=0;x<5;x++)
		{
			for(int y=x+1;y<5;y++)
			{
				if(sortAve[x]>sortAve[y])
				{
					store=sortAve[x];
					sortAve[x]=sortAve[y];
					sortAve[y]=store;
				}
			}
		}
		cout<<"The order of grades are:"<<endl;
		for(int x=0;x<5;++x)
		{
			cout<<sortAve[x]<<endl;
		}
}

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  char name[5][20];
  int mark[5][3];
int total[5]={0};
double ave[5]={0.0};
for(int i=0; i<5; i++){
cout<<"Enter name for student"<<i+1<<" : ";
  cin.getline(name[i],20);
cout<<"enter m1"<<name[i]<<" : ";
cin>>mark[i][0];
cout<<"enter m2"<<name[i]<<" : ";
cin>>mark[i][1];
cout<<"enter m3"<<name[i]<<" : ";
cin>>mark[i][2];
cin.ignore(100,'\n');
total[i]=mark[i][0]+mark[i][1]+mark[i][2];
ave[i]=total[i]/3.0;
  cout<<endl;
}
cout<<setw(5)<<"Name"
  <<setw(5)<<"m1"
  <<setw(5)<<"m2"
  <<setw(5)<<"m3"
  <<setw(5)<<"total"
  <<setw(5)<<"ave"<<endl;
cout<<"\n";
int top_index=0;
 for(int i=0; i<5; i++){
cout<<setw(5)<<name[i]
  <<setw(5)<<mark[i][0]
  <<setw(5)<<mark[i][1]
  <<setw(5)<<mark[i][2]
  <<setw(5)<<total[i]
   <<setw(5)<<ave[i]<<endl;
if (total[i]>total[top_index]){
top_index=i;
}
}
cout<<"\nTop student"<<name[top_index]<<endl;
return 0;
}

  













  

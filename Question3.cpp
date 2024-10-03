/* Take the age from the user and then decide accordingly
1. if age  <18,
      print-> "not eligible for job"
2. if age >= 18, and age <= 54,
      print-> "eligilbe for job"
3. if age >=55 and <=57,
      print->"eligilbe for job, but retirementt soon."
4. if age > 57
      print-> "retirement time"  */
#include<bits/stdc++.h>
using namespace std;

int main(){ 
  int age;
  cin >> age;
  if(age < 18){
    cout<<"not eligilbe for job";
  }
  else if(age <= 57){
    cout<<"eligilbe for job";
       if(age <= 55){
    cout<<" eligilbe but retirement soon.";
       }
  }
  else{
    cout<<"Retiremnt Time";
  return 0;
  }
}
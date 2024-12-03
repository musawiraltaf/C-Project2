//Musawir Altaf Khan 24i-2134 Cy-A assignment 
#include<iostream>
using namespace std;
int main()
        {
         int x;
            cout<<"Enter the amount: ";
         cin>>x;
            cout<<"Currency Note: Number"<<endl;
            cout<<"500: "<<(x/500)<<endl;//finding number of 500s
            cout<<"100: "<<(x%500)/100<<endl;//finding number of 100s
            cout<<"50: "<<((x%500)%100)/50<<endl;//finding number of 50s 
            cout<<"20: "<<(((x%500)%100)%50)/20<<endl;//finding number of 20s
            cout<<"10: "<<((((x%500)%100)%50)%20)/10<<endl;//finding number of 10s 
            cout<<"5: "<<(((((x%500)%100)%50)%20)%10)/5<<endl;//finding number of 5s 
            cout<<"1: "<<((((((x%500)%100)%50)%20)%10)%5)<<endl;//finding number of 1s
        return 0;
        }
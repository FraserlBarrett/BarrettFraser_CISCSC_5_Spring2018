/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 15, 2018, 10:40 AM
 * Purpose:  Men with constuct 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Display menu
    cout<<"Choose from the following menu"<<endl;
    cout<<"Type 1 for independant-if example"<<endl;
    cout<<"Type 2 for dependant-if example"<<endl;
    cout<<"Type 3 for Ternary Op example"<<endl;
    cout<<"Type 4 for Switch-Case example"<<endl;
    cin>>choice;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    if(choice>='1'&&choice<='4'){
        switch(choice){
            case '1':{
                cout<<"Independent-if Example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your pay 20Check"<<endl;
                cout<<"Input the hours you worked for the week "<<endl;
                cout<<"and your Pay rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                payChk=hrsWrkd*payRate;
                //If you worked over > 40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
              case '2':{
                cout<<"Dependent-if Example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your pay Check"<<endl;
                cout<<"Input the hours you worked for the week "<<endl;
                cout<<"and your Pay rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                if(hrsWrkd>=0&&hrsWrkd<=40){
                    payChk=hrsWrkd*payRate;
                }else{
                    payChk=hrsWrkd*payRate+(hrsWrkd)*payRate;
                }
                //If you worked over > 40 hours
                if(hrsWrkd>40)payChk+=((hrsWrkd-40)*payRate);
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
                case '3':{
                cout<<"Ternary Op Example"<<endl;
                //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your pay Check"<<endl;
                cout<<"Input the hours you worked for the week "<<endl;
                cout<<"and your Pay rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                payChk=(hrsWrkd>=0&&hrsWrkd<=40)?
                    hrsWrkd*payRate:
                    hrsWrkd*payRate+(hrsWrkd-40)*payRate;
  
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
                  case '4':{
                cout<<"Switch-Case Example"<<endl;
            //Declare Variables
                float hrsWrkd,payRate,payChk;
                //Initialize Variables
                cout<<"This program calculates your pay Check"<<endl;
                cout<<"Input the hours you worked for the week "<<endl;
                cout<<"and your Pay rate $'s/hr"<<endl;
                cin>>hrsWrkd>>payRate;
                //Calculate your pay check
                switch(hrsWrkd>=0&&hrsWrkd<=40){
                    case true:{
                        payChk=hrsWrkd*payRate;
                        break;
                    }
                }
                default:{
                    payChk=hrsWrkd*payRate+(hrsWrkd-40)*payRate;
                }
  
                //Output all conditions
                cout<<"Hours Worked = "<<hrsWrkd<<endl;
                cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
                cout<<"Pay Check = $"<<payChk<<endl;
                break;
            }
        }
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    //Exit
    return 0;
}


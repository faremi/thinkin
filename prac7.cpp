#include <iostream>
using namespace std;
int main(){   
    char choice;
    for (;;){
        do{
            cout <<"Help on: \n"<<endl;
            cout <<" 1. if\n"<<endl;
            cout <<" 2. switch \n"<<endl;
            cout <<" 3. for\n"<<endl;
            cout <<" 4. while\n"<<endl;
            cout <<" 5. do-while\n"<<endl;
            cout <<" 6. break\n"<<endl;
            cout <<" 7. Continue\n"<<endl;
            cout <<" 8. goto\n"<<endl;
            cout <<"Choose one (q to quit): ";
            cin >>choice;
        
        }while(choice < '1'||choice > '8' && choice !='q');
        if (choice == 'q') break;
        cout <<"endl";
        switch(choice){
            case '1':
                cout << "The if"<<endl;
                cout << "if(condition) staement:"<<endl;
                cout << "else statement"<<endl;
            case '2':
                cout << "The switch statemnt"<<endl;
                cout << "Switch (expression)"<<endl;
                cout << "   case constant: "<<endl;
                cout << " Statement sequence :"<<endl;
                cout << " break\n"<<endl;
            case '3':
                cout << "The for"<<endl;
                cout << "for(init; conditon; increment"<<endl;
                cout << " statement"<<endl;
                cout << "  continue"<<endl;
                cout << "break statement"<< endl;
            case '4':
                cout << "The while "<<endl;
                cout << "while (condition) staement:"<<endl;
                cout << "break statement"<<endl;
            case '5':
                cout << "The do-while"<<endl;
                cout << "do{statement}while(condition);"<<endl;
            case '6':
                cout << "The continue"<<endl;
                cout << "condition; staement:"<<endl;
            case '7':
                cout << "The goto"<<endl;
                cout << "go to"<<endl;
                 
            case '8':
                cout << "The break"<<endl;
                cout << "break; "<<endl; 

        }
        break;
    }
    return 0;
}

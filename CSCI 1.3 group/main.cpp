//
//  main.cpp
//  CSCI 1.3 group
//
//  Created by Joel Piontek on 1/15/20.
//  Copyright © 2020 Snowschooled. All rights reserved.


#include <iostream>// new text
using namespace std;//newer text
int main()
{int a,b,c,d,num,den;
char junk,operate,yN;
do{cout<<"Enter first fraction:"<<endl;
cin>>a>>junk>>b;
cout<<"Enter operation:"<<endl;
cin>>operate;
cout<<"Enter second fraction:"<<endl;
cin>>c>>junk>>d;
switch(operate){case '+':
    num=(a*d+b*c);
    den=d*b;
    cout<<"Sum="<<num<<junk<<den<<endl;
    break;
    case'-':
        num=(a*d-b*c);
        den=b*d;
        cout<<"Sum="<<num<<junk<<den<<endl;
            break;
        case'/':
            num=(a*d);
            den=b*c;
            cout<<"Sum="<<num<<junk<<den<<endl;
            break;
            case'*':
                num=a*b;
                den=c*d;
                cout<<"Sum="<<junk<<den<<endl;
                break;
}cout<<"Continue (y or no)?"<<endl;
cin>>yN;
}while(yN=='y');
return 0;
}

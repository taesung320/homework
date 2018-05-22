//
//  main.cpp
//  GIt
//
//  Created by saesol on 2018. 5. 23..
//  Copyright © 2018년 scit3. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{bool arr[3][4];
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<4;b++)
        {
            cin>>arr[a][b];
            
        }
        cout<<endl;
    }
    
    for(int a=0;a<3;a++)
    {
        int n=0;
        for(int b=0;b<4;b++)
        {
            if(!arr[a][b]) n++;
        }
        char c=64+n;
        if(!(n)) c=69;
        cout<<c<<endl;

    }
    
}

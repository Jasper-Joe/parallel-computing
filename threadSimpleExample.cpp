//
//  main.cpp
//  multi-threading
//
//  Created by Jinglun Zhou on 2020/2/15.
//  Copyright © 2020 Jinglun Zhou. All rights reserved.
//

#include <iostream>
#include <thread>
using namespace std;
int a=1;
void run(){
    a+=1;
}
int main(int argc, const char * argv[]) {
    thread thread1(run);
    thread thread2(run);
    thread1.join();
    thread2.join();
    printf("%d\n",a);// output could be 2 or 3
    return 0;
}

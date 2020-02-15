//
//  main.cpp
//  multiprocessing
//
//  Created by Jinglun Zhou on 2020/2/15.
//  Copyright © 2020 Jinglun Zhou. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <unistd.h>
int a=1;
void run(bool child){
    a+=child ? 2:1;
}
int main(int argc, const char * argv[]) {
    a+=1;
    pid_t pid=fork(); // parallel universe
    run(pid==0); //child process pid is 0
    printf("%d\n",a);
    
    

    return 0;
}

/grrkek

#include <iostream>
#include <vector>

int main(){
    std::vector<int> even = {2, 4, 3, 6, 1, 9};
    int x = 0;
    int y = 1;

    for(int i=0;i < even.size();i++){
        if(even[i] % 2 == 0){
            x+=even[i];
        }
    }
    for(int i=0;i < even.size();i++){
        if(even[i] % 2 != 0){
            y*=even[i];
        }
    }
    std::cout << x << "\n";
    std::cout << y << "\n";
}
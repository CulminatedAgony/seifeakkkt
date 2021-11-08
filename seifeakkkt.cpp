#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    string seifeak, text;
    seifeak = "kkt";
    text = "Seifeak je kkt";

    if(seifeak == "kkt"){
       int a = 0;
       while ( text[a] != '\0'){
	      cout << text[a];
	      std::this_thread::sleep_for(std::chrono::milliseconds(100));
          a++;
    };
}
    else{
        cout << "Seifeak je normalni";
    }
    return 0;
}

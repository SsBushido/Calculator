#include<iostream>
using namespace std;

 main(){
int num1,num2,ans,ch;
cout << "Calculator" << endl;
cout << "Input First Number: ";
cin >> num1;
cout << "Input Second Number: ";
cin >> num2;
cout << endl << endl;
cout << "Choose an Operation" << endl;
cout << "1. Addtion" << endl;
cout << "2. Subtraction" << endl;
cout << "3. Multiplication" << endl;
cout << "4. Division" << endl;
cout << "choice: ";
cin >> ch;
if(ch==1){
	ans = num1 + num2;
	cout << "answer: " << ans;
}
else if (ch==2){
	ans = num1 - num2;
	cout << "answer: " << ans;
}
else if (ch==3){
	ans = num1 * num2;
	cout << "answer: " << ans;
}
else if (ch==4){
	ans = num1 / num2;
	cout << "answer: " << ans;
}
else {
	cout << "invalid input" << endl;
}



}

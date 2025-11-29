#include <iostream>
#include <cmath>
using namespace std;
void calculateRoots(double a, double b, double c){
	double discriminant = b * b - 4* a* c;
	if (discriminant > 0){
		double root1 = (-b + sqrt(discriminant))/ (2*a);
		double root2 = (-b - sqrt(discriminant))/(2*a);
		cout<< " Roots are real and distinct; "<< root1 << " and " << root2 << endl;
	}
	else if(discriminant == 0){
		double root = -b/(2*a);
		cout << "Roots are real and equal;" << root << endl;
	}
	else {
		double realPart = -b/ (2*a);
		double imaginaryPart = sqrt(-discriminant)/(2*a);
		cout << " Roots are complex ;" << realPart << " + " << imaginaryPart << "i and" << realPart << " - " << imaginaryPart << "i"<< endl;
	}
}
int main(){
	double a, b, c;
	cout<< "Enter coefficients a, b, c:";
	cin >> a >> b >> c;
	if(a==0){
		cout << "anaot a quadratic equation!" << endl;
	}
	else {
		calculateRoots(a,b,c);
	}
	return 0;
}
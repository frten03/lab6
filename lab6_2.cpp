#include <iostream>
#include <cmath>
using namespace std;

//Function deg2rad() ซึ่งเป็น Function ที่จะรับ Input เป็นเลขทศนิยมที่เป็นค่ามุมในหน่วยองศา และ Return ค่ามุมในหน่วย radian ออกมา
double rad;
double deg2rad(double deg){
        rad = deg*M_PI/180 ;
        return rad;
}
//Function rad2deg() ซึ่งเป็น Function ที่จะรับ Input เป็นเลขทศนิยมที่เป็นค่ามุมในหน่วย radian และ Return ค่ามุมในหน่วยองศาออกมา
double deg;
double rad2deg(double rad){
        deg = rad/M_PI*180 ;
        return deg; 
}
/*Function findXComponent() ที่ใช้ในการหาองค์ประกอบตามแนวแกน X ของเวกเตอร์ลัพธ์ โดยมี Input 4 ตัว คือ ความยาวและค่ามุมในหน่วย radian ของเวกเตอร์ทั้ง 2 ตัว
ที่ต้องการนำมาบวกกัน และจะ Return คำตอบออกไปเป็นขนาดขององค์ประกอบตามแนวแกน X ของเวกเตอร์ลัพธ์*/
double xcompo;
double findXComponent(double la, double lb, double rada, double radb){
    xcompo = la*cos(rada) + lb*cos(radb) ;
    return xcompo;
}
/*Function findYComponent() ที่ใช้ในการหาองค์ประกอบตามแนวแกน Y ของเวกเตอร์ลัพธ์ โดยมี Input 4 ตัว คือ ความยาวและค่ามุมในหน่วย radian ของเวกเตอร์ทั้ง 2 ตัว
ที่ต้องการนำมาบวกกัน และจะ Return คำตอบออกไปเป็นขนาดขององค์ประกอบตามแนวแกน Y ของเวกเตอร์ลัพธ์*/
double ycompo;
double findYComponent(double la, double lb, double rada, double radb){
    ycompo = la*sin(rada) + lb*sin(radb) ;
    return ycompo;
}
/*Function pythagoras() ที่ใช้ในการหาความยาวของเวกเตอร์ลัพธ์ โดยรับ Input 2 ตัวคือ องค์ประกอบตามแนวแกน X ของเวกเตอร์ลัพธ์ และ องค์ประกอบตามแนวแกน Y ของเวกเตอร์ลัพธ์ 
และจะ Return คำตอบออกไปเป็นความยาวของเวกเตอร์ลัพธ์*/
double FindL;
double pythagoras(double xcompo, double ycompo){
        FindL = sqrt(pow(xcompo,2) + pow(ycompo,2));
        return FindL ;
}
/*Function showResult()  ที่แสดงผลลัพธ์ ซึ่งเป็นค่าความยาวของเวกเตอร์ลัพธ์ และทิศทางของเวกเตอร์ลัพธ์ซึ่งเป็นค่ามุมในหน่วยองศา ซึ่งรูปแบบการแสดงผลต้องสอดคล้องกับตัวอย่างการใช้งานที่
กำหนดให้ โดย Function นี้จะเป็นการแสดงผลซึ่งไม่มีการ Return ค่าใด ๆ*/
void showResult(double L, double degree){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
    cout << "\nLength of the resultant vector = " << L ;
    cout << "\nDirection of the resultant vector (deg) = " << degree ;
    cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}

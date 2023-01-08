/* 
التكليف 11 تحدي

    شاهد ال Output المطلوب ولاحظ أنه كله على سطر واحد
    ممنوع التعديل على أي كلمة في السطر ولا تغيير السطور ولا إضافة مسافات
    كل ما يمكنك فعله فقط هو إضافة أو إزالة ال Escaping Characters فقط
    يمكنك إضافة أي عدد تريده حتى تصل لل Output المطلوب

#include <iostream>
using namespace std;

int main()
{
  cout << "Bello\nHello Elzeroo\n";
  cout << " Web Schoolll\n\n";
  cout << " I Love\n Programming\n";
  cout << " Too Much\t\t";
  cout << " Specially C++\n";
  return 0;
}

// Needed Output
"Hello Elzero Web School I Love Programming Too Much Specially C++"


*/

//================================================
//=========       Solution          ==============
//================================================




#include <iostream>
using namespace std;

int main()
{
  cout << "Bello\rHello Elzeroo\b";
  cout << " Web Schoolll\b\b";
  cout << " I Love\a Programming\a";
  cout << " Too Much\a\a";
  cout << " Specially C++\n";
  return 0;
}

// Needed Output
//"Hello Elzero Web School I Love Programming Too Much Specially C++"

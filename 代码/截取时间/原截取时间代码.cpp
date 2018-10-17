#include <iostream>
#include <cstring>
using namespace std;

int strCouOut(const string& currDate,char * str_Tok)
{
	string currD = currDate;
        const char * str = currD.c_str();
        
        char *newstr = new char[strlen(str)+1]; 
        char *chr;
        char strCur[10]= {0};
        cout << newstr <<endl;
        int i = 0;
        int b = 0;
        int c = 0;

            while(str!="\0")
            {
                if(8 == i)
                {

                    strcpy(newstr, str);
		          cout << newstr << endl;
		          break;
                }
                str++;
                i++;
            }
 	        b = strlen(str);

            for(i =0 ; i <= b; i++)
            {
               int in = (int)*newstr;
		        

                if( in < 48 || in > 57 )
                {
                    cout <<"if in::" <<  in << endl;
                    newstr++;
		    cout <<"if newstr::"<< newstr << endl;
		    cout << "if i:: " << i << endl;
		    continue;
                }
                cout << newstr << endl;
                strCur[c] = *newstr;
		cout << *newstr << endl;
		cout <<"c::"<< c << endl;              
                newstr++;
                c++;
            }
            cout << strCur <<endl;
            chr = strCur;
            strcpy(str_Tok,chr);   
}

int main()
{
  string currentDate = "2018091911:00";
  //string currentDate = "201891911:00"; 
  char str[10]={0};
  strCouOut(currentDate,str);
  cout << str <<endl;
   return 0;
}

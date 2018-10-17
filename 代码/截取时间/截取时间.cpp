#include <iostream>
#include <cstring>
#include <string>

using namespace std;
/**
 *
 * @param  currDate [传入要截取的时间字符串]
 * @param  str_Tok  [传入连续空间的首地址]
 * @param  position [要忽略的位数]
 * @return int 
 * 
 */
int  strCouOutTime(const string& currDate,char * str_Tok,int position)
{
        
        string currD = currDate;
        const char * str = currD.c_str();
        
        char *newstr = new char[strlen(str)+1]; 
        char strCur[10]= {0};
        int i = 0;
        int b = 0;
        int c = 0;
        
            if(strlen(str) < position || sizeof(str_Tok) < (strlen(str) -position ) )
            {
                return -1;
            }

            while(str!="\0")
            {
                if(position == i)
                {

                  strncpy(newstr, str,13);
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
                    newstr++;
                    continue;
                }
                strCur[c] = *newstr;
                newstr++;
                c++;
            }
            strcpy(str_Tok,strCur);
            return 0;  
}

int main()
{
  string currentDate = "2018091911:00";
  //string currentDate = "201891911:00"; 
  char str[10]={0};
 // momset(str,0,40);
  int row =  strCouOutTime(currentDate,str,8);
  cout << str << endl;
   return 0;
}

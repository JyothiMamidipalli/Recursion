//Here they will give a character array which contains pi and you should replace pi with 3.14
#include<bits/stdc++.h>
using namespace std;
void ReplacePi(int i,char *s)
{
	if(s[i]=='\0' and s[i+1]=='\0')
	{
		return ;
	}
	if(s[i]=='p' and s[i+1]=='i')
	{
		int j=i+2;
		//go to last
		while(s[j]!='\0') j++;
		//shift right
		while(j >= i+2){
            s[j+2] = s[j];
            j--;
        }
        s[i]='3';
        s[i+1]='.';
        s[i+2]='1';
        s[i+3]='4';
        ReplacePi(i+4,s);
	}
	else{
        ReplacePi(i+1,s);
    }
}
int main(){
  char s[1000] ;
  cin >> s;
  //int len = strlen(s);
  ReplacePi(0,s);
  cout<<s;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

void C(vector<vector<char>> &v,int col)
{
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			//first aur last line
			if(i==0||i==6)
			{
				if((j%7)%3!=0){ 
					v[i][j+col]='$';}
				else  {v[i][j+col]=' ';}
					
			}

			//second nd second last line

		   if(i==1||i==5)
			{
				if(((j)%7)<2||((j)%7)>4)  {v[i][j+col]='$';}
				else  {v[i][j+col]=' ';}
			}

			// rest 

			if(i==2||i==4||i==3)
			{
				if(((j)%7)<2) { v[i][j+col]='$';}
				else  {v[i][j+col]=' ';}
			}


		}

	}

}


void D(vector<vector<char>> &v,int col)
{
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(i==0||i==6)
			{
				if(((j)%7)!=0&&((j)%7)%3==0) v[i][j+col]=' ';
				else v[i][j+col]='%' ;
			}
			else{
				if(((j)%7)==1||((j)%7)==2||((j)%7)==5||((j)%7)==6)
					v[i][j+col]='%';
				else
					v[i][j+col]=' ';
			}
		}
		
	}
}



int main()
{
	string str;
	cin>>str;
	int n=(str.length()*7)+((str.length()-1)*2);
	vector<vector<char>>v(7,vector<char>(n,' '));
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='C')
		{
			int col=(i!=0)?((i*7)+i+i):0;
			C(v,col);
		}
		else{
			int col=(i!=0)?((i*7)+i+i):0;
			D(v,col);
		}
	}

	
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<v[0].size();j++)
		{
			cout<<v[i][j];
		}
		cout<<endl;
	}
	


}
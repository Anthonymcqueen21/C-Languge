if(Fireball *p=dynamic_cast<Fireball*>(spell))p->revealFirepower();
	else if(Frostbite *p=dynamic_cast<Frostbite*>(spell))p->revealFrostpower();
	else if(Thunderstorm *p=dynamic_cast<Thunderstorm*>(spell))p->revealThunderpower();
	else if(Waterbolt *p=dynamic_cast<Waterbolt*>(spell))p->revealWaterpower();
	else{
		string a=SpellJournal::journal,b=spell->revealScrollName();
		void LCS(const string &a,const string &b);
		LCS(a,b);
	}
}
#include <cstring>
short lcs[2001][2001];
void LCS(const string &a,const string &b){
	memset(lcs,0,sizeof(lcs));
	int m=0,i=1,j,_a=a.size(),_b=b.size();
	for(;i<=_a;i++)
		for(j=1;j<=_b;j++){
			lcs[i][j]=max(a[i-1]==b[j-1]?lcs[i-1][j-1]+1:0,max<int>(lcs[i-1][j],lcs[i][j-1]));
			if(m<lcs[i][j])m=lcs[i][j];
		}
	cout<<m<<endl;
